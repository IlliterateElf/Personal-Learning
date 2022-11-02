#pragma once
#include <stdlib.h>
#include <time.h>
enum class Gender
{
	male,
	female
};
class Passenger
{
public:
	const int CHILD_AGE = 10;

private:
	int mAge;
	Gender mGender;
	bool mTried;

public:
	Passenger();

	Gender GetGender();
	int GetAge();
	void SetTried(bool tTried);
	bool HadTried();
};