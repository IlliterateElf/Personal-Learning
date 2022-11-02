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
    void operator()(std::queue<Client*>* clients) {
        for (int i = 0; i < 76738; i++) {
            clients->push(new Client(i));
        }
    }
};

class Access {
public:
    void operator()(std::queue<Client*>* clients, std::queue<std::time_t>* clientsWait, Data* data, boolean* genDone) {
        std::time_t avgWait = 0;

        while (clients->size() != 0 && *genDone != true) {
            if (clients->size() == 0) {
                continue;
            }

            View* view = new View(data, clients->front());
            delete view;
            clients->front()->SetEnd(time(NULL));
            clients->front()->CalcWait();
            clientsWait->push(clients->front()->GetWait());
            delete clients->front();
            clients->pop();
        }

        for (int i = 0; i < clientsWait->size(); i++) {
            std::cout << "Calculating wait index " << i << std::endl;
            avgWait += clientsWait->front();
            clientsWait->push(clientsWait->front());
            clientsWait->pop();
        }

        std::cout << "Average wait was: " << avgWait / clientsWait->size() << std::endl;
    }
};
int main()
{
    boolean genDone = false;
    Data* data = new Data;
    std::queue<Client*> clients;
    std::queue<std::time_t> clientsWait;

    // Model thread start
    std::thread modelThread(Model(), data);

    // Initialize the clients queue
    std::thread genThread(Generate(), &clients);

    // Parse through the clients queue
    std::thread accessThread(Access(), &clients, &clientsWait, data, &genDone);

    // Join the threads before wait time calculation
    genThread.join();
    accessThread.join();

    modelThread.join();
}
