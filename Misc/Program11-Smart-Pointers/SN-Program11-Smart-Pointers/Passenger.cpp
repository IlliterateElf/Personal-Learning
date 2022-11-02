#include "Passenger.h"

Passenger::Passenger()
{
	mAge = rand() % 100 + 1;
	mGender = static_cast<Gender>(rand() % 2);
	mTried = false;
}

Gender Passenger::GetGender()
{
	return mGender;
}
int Passenger::GetAge()
{
	return mAge;
}
void Passenger::SetTried(bool tTried)
{
	mTried = tTried;
}
bool Passenger::HadTried()
{
	return mTried;
}