#pragma once

namespace CAR_CONST
{
	enum
	{
		ID_LENGTH = 20, MAX_SPEED = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LENGTH];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};