#pragma once
#include <iostream>
#include <string>

#include "Data.h"
#include "Client.h"

class View
{
	std::string input = "";

public:
	View(Data* data, Client* client) {
		input = "query";
		if (input == "query") {
			client->SetNum(data->GetNum());
			std::cout << "Client " << client->GetID() << " served with num " << client->GetNum() << std::endl;
		}
		else {
			std::cout << input << " is not a registered command." << std::endl;
		}
	}
	void operator()(Data* data, Client* client) {
		
		input = "query";
		if (input == "query") {
			client->SetNum(data->GetNum());
			std::cout << "Client " << client->GetID() << " served with num " << client->GetNum() << std::endl;
		}
		else {
			std::cout << input << " is not a registered command." << std::endl;
		}
	}
};

