#pragma once
#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LENGTH = 20, MAX_SPEED = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

namespace SPORTSCAR_CONST
{
	enum
	{
		ID_LENGTH = 20, MAX_SPEED = 300, FUEL_STEP = 10,
		ACC_STEP = 30, BRK_STEP = 30, 
		BOOSTER_SPEED = 400, BOOSTER_STEP = 100
	};
}

class Car
{
protected:
	char gamerID[CAR_CONST::ID_LENGTH];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};


class SportsCar : public Car
{
public:
	void Accel();
	void Break();
	void Booster();
};