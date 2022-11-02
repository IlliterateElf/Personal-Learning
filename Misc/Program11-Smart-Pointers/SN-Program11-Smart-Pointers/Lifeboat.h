#pragma once

#include <memory>
#include <list>
#include <iostream>

class Passenger;

class Lifeboat
{
private:
	const int CAP = 20;
	std::list<std::shared_ptr<Passenger>> mPassengers;

public:
	Lifeboat();
	~Lifeboat();
	bool AddPassenger(std::shared_ptr<Passenger> tPerson);
};