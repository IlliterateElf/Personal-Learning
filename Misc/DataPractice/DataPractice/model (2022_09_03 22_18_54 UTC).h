#pragma once
#include <Windows.h>
#include <thread>

#include "Data.h"

class Model
{
	int num = 0;
	
public:
	void operator()(Data* data) {
		for (int i = 0; i < INT_MAX; i++) {
			data->SetNum(i);
		}
	}
};

