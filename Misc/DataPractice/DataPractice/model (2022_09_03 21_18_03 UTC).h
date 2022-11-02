#pragma once
#include <Windows.h>
#include <thread>

#include "Data.h"

class Model
{
	int num = 0;
	
public:
	void operator()(Data* data) {
		for (int i = 0; i < 1000; i++) {
			std::this_thread::sleep_for(std::chrono::seconds(1));
			data->SetNum(i);
		}
	}
};

