// DataPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <queue>

#include "View.h"
#include "Model.h"
#include "Data.h"
#include "Client.h"

class Run {
    int instance = 0;

    class Generate {
    public:
        void operator()(Client* head, boolean* genDone, int* size) {
            Client* temp = head;
            for (int i = 0; i < 76738; i++) {
                temp->SetNext(new Client(i));
                temp = temp->GetNext();
                *size = i;
            }
            *genDone = true;
        }
    };

    class Access {
    public:
        void operator()(Client* head, std::queue<std::time_t>* clientsWait, Data* data, boolean* genDone, int* size, float* avgWait) {
            std::time_t totalWait = 0;
            Client* temp = head;
            while (*size != 76737 || *genDone != true) {
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
            while (temp->GetNext() != nullptr) {

                View* view = new View(data, temp);
                //delete view;
                temp->SetEnd(time(NULL));
                temp->CalcWait();
                clientsWait->push(temp->GetWait());
                temp = temp->GetNext();
            }
            for (int i = 0; i < clientsWait->size(); i++) {
                totalWait += clientsWait->front();
                clientsWait->push(clientsWait->front());
                clientsWait->pop();
            }
            *avgWait = totalWait / clientsWait->size();
        }
    };
public:
    Run(int instance) {
        this->instance = instance;
    }

    float RunProgram() {
        Client* head = new Client(0);
        boolean genDone = false;
        Data* data = new Data;
        int size = 0;
        float avgWait = 0;

        std::queue<std::time_t> clientsWait;
        // Model thread start
        std::thread modelThread(Model(), data, &size);

        // Initialize the clients queue
        std::thread genThread(Generate(), head, &genDone, &size);

        // Parse through the clients queue
        std::thread accessThread(Access(), head, &clientsWait, data, &genDone, &size, &avgWait);

        // Join the threads before wait time calculation
        genThread.join();
        accessThread.join();

        modelThread.join();

        return avgWait;
    }
};