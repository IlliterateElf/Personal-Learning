#include "Captain.h"

Captain::Captain(std::shared_ptr<Lifeboat> boat1, std::shared_ptr<Lifeboat> boat2)
{
	std::weak_ptr<Lifeboat> t1 = boat1;
	std::weak_ptr<Lifeboat> t2 = boat2;
	mSightedBoats.push_back(t1);
	mSightedBoats.push_back(t2);
}

bool Captain::BoatsHere() {
	bool result;
	std::list<std::weak_ptr<Lifeboat>>::iterator it;
	for (it = mSightedBoats.begin(); it != mSightedBoats.end(); it++)
	{
		if (it != mSightedBoats.end()) //If a boat exists
		{
			return true;
		}
	}
	return false;
}
