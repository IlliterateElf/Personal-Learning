// DataPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <queue>

#include "View.h"
#include "Model.h"
#include "Data.h"
#include "Client.h"

int main()
{
    Data* data = new Data;
    int numViews = 0;
    std::queue<Client*> clients;
    for (int i = 0; i < INT_MAX; i++) {
        clients.push(new Client(i));
        std::cout << i << std::endl;
    }
    std::thread thread1(Model(), data);
    int size = clients.size();
    for (int i = 0; i < size; i++) {
        View* view = new View(data, clients.front());
        delete view;
        delete clients.front();
        clients.pop();
    }
    /*for (int i = 0; i < INT_MAX; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        viewThreads.push_back(new std::thread(View(), data));
        numViews = i;
        std::cout << numViews << std::endl;
    }*/
    thread1.join();
    /*for (int i = 0; i < viewThreads.size(); i++) {
        viewThreads.back()->join();
        viewThreads.pop_back();
    }*/
}
