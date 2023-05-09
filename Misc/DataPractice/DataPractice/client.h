#pragma once
#include <ctime>

class Client
{
    int num = 0;
    int id;
    std::time_t initial = time(NULL);
    std::time_t wait = time(NULL);
    std::time_t end = time(NULL);

    Client* next;

public:
    Client(int id) {
        this->next = NULL;
        this->id = id;
    }
    Client* GetNext() {
        return this->next;
    }
    void SetNext(Client* next) {
        this->next = next;
    }
    void SetNum(int i) {
        num = i;
    }
    int GetNum() {
        return num;
    }
    int GetID() {
        return id;
    }
    void CalcWait() {
        wait = end - initial;
    }
    void SetEnd(std::time_t end) {
        this->end = end;
    }
    void SetInitial(std::time_t initial) {
        this->initial = initial;
    }
    std::time_t GetWait() {
        return wait;
    }
};

