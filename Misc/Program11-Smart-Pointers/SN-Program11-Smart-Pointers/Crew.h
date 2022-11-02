#pragma once
#include <memory>
#include <stdlib.h>
#include <time.h>

#include "Lifeboat.h"

class Crew
{
private:
	const int DROP_CHANCE = 5;
	std::shared_ptr<Lifeboat> mBoat;

public:
	Crew(Lifeboat tBoat);

	void Drop();
	bool DroppedBoat();
	std::shared_ptr<Lifeboat> GetBoat();
};
