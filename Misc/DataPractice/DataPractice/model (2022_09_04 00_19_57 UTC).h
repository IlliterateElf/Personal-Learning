#pragma once
#include <Windows.h>
#include <thread>
#include <iostream>

#include "Data.h"

class Model
{
	int num = 0;
	
public:
	void operator()(Data* data, int* size) {
		for (int i = 0; i < INT_MAX; i++) {
			if (*size = 76737) break;
			data->SetNum(i);
		}
	}
};

