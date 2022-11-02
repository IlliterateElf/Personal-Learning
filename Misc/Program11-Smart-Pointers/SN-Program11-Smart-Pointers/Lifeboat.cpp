#include "Lifeboat.h"

Lifeboat::Lifeboat() {}
Lifeboat::~Lifeboat()
{
	std::cout << "Passengers on boat: " << mPassengers.size() << std::endl;
}

bool Lifeboat::AddPassenger(std::shared_ptr<Passenger> tPerson)
{
	if(mPassengers.size() != CAP) {
		mPassengers.push_back(tPerson);
		return true;
	}
	return false;
}