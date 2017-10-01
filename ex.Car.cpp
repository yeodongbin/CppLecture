#include <iostream>
#include <cstring>
#include "ex.Car.h"
using namespace std;

void Car::InitMembers(char*ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "     Gamer ID : " << gamerID << endl;
	cout << "   Fuel Gauge : " << fuelGauge << " L"<< endl;
	cout << "Current Speed : " << curSpeed << " Km/h"<<endl << endl;
}
void Car::Accel()
{
	if (fuelGauge == 0)//fuel gauge check
	{
		cout << " Fuel is empty " << endl;
		return;
	}
	else
	{
		if ( fuelGauge >= CAR_CONST::FUEL_STEP)
		{
			curSpeed += CAR_CONST::ACC_STEP;
			fuelGauge -= CAR_CONST::FUEL_STEP;
		}
		else
		{
			curSpeed += (CAR_CONST::ACC_STEP/
				(fuelGauge/CAR_CONST::FUEL_STEP));
			fuelGauge = 0;
		}
	}

	if (curSpeed >= CAR_CONST::MAX_SPEED)
	{
		curSpeed = CAR_CONST::MAX_SPEED;
	}
}
void Car::Break()
{
	if (curSpeed <= CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}