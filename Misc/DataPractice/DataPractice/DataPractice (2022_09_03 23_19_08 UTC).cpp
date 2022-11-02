// DataPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <queue>

#include "View.h"
#include "Model.h"
#include "Data.h"
#include "Client.h"

class Generate {
public:
    void operator()(Client* head, boolean* genDone) {
        Client* temp = head;
        for (int i = 0; i < 76738; i++) {
            temp->SetNext(new Client(i));
            temp = temp->GetNext();
        }
        *genDone = true;
    }
};

class Access {
public:
    void operator()(Client* head, std::queue<std::time_t>* clientsWait, Data* data, boolean* genDone) {
        std::time_t avgWait = 0;
        Client* temp = head;
        while (*genDone == false) {
            if (temp->GetNext() == nullptr) {
                continue;
            }

            View* view = new View(data, temp);
            //delete view;
            temp->SetEnd(time(NULL));
            temp->CalcWait();
            clientsWait->push(temp->GetWait());
            temp = temp->GetNext();
        }
        for (int i = 0; i < clientsWait->size(); i++) {
            avgWait += clientsWait->front();
            clientsWait->push(clientsWait->front());
            clientsWait->pop();
        }
        double num = avgWait;
        std::cout << "Average wait was: " << num / clientsWait->size() << std::endl;
    }
};
int main()
{
    Client* head = new Client(0);
    boolean genDone = false;
    Data* data = new Data;

    std::queue<std::time_t> clientsWait;
    // Model thread start
    std::thread modelThread(Model(), data);

    // Initialize the clients queue
    std::thread genThread(Generate(), head, &genDone);

    // Parse through the clients queue
    std::thread accessThread(Access(), head, &clientsWait, data, &genDone);

    // Join the threads before wait time calculation
    genThread.join();
    accessThread.join();

    modelThread.join();
}
