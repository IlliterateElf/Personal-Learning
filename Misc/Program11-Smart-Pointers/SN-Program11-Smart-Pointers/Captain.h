#pragma once

#include <memory>
#include <list>

#include "Lifeboat.h"

class Captain
{
private:
	std::list<std::weak_ptr<Lifeboat>> mSightedBoats;

public:
	Captain(std::shared_ptr<Lifeboat> boat1, std::shared_ptr<Lifeboat> boat2);

	bool BoatsHere();
};
