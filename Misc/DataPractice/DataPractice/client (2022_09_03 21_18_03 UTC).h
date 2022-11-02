#pragma once
class Client
{
    int num = 0;
    int id;

public:
    Client(int id) {
        this->id = id;
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
};

