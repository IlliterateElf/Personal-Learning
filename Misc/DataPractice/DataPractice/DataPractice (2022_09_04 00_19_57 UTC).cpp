// DataPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "Run.h"

int main()
{
    int max = 10;
    std::vector<float> results;
    float avg = 0;
    for (int i = 0; i < max; i++) {
        Run* program = new Run(i);
        results.push_back(program->RunProgram());
    }
    while (results.size() != 0) {
        avg += results.back();
        results.pop_back();
    }
    std::cout << avg / max << std::endl;
}
