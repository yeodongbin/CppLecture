#include "ex.Car.h"

void SportsCar::Accel()
{
	if (fuelGauge == 0)//fuel gauge check
	{
		cout << " Fuel is empty!! " << endl;
		return;
	}
	else
	{
		if (fuelGauge >= SPORTSCAR_CONST::FUEL_STEP)
		{
			curSpeed += SPORTSCAR_CONST::ACC_STEP;
			fuelGauge -= SPORTSCAR_CONST::FUEL_STEP;
		}
		else
		{
			curSpeed += (SPORTSCAR_CONST::ACC_STEP /
				(fuelGauge / SPORTSCAR_CONST::FUEL_STEP));
			fuelGauge = 0;
		}
	}

	if (curSpeed >= SPORTSCAR_CONST::MAX_SPEED)
	{
		curSpeed = SPORTSCAR_CONST::MAX_SPEED;
	}
}
void SportsCar::Break()
{
	if (curSpeed <= SPORTSCAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= SPORTSCAR_CONST::BRK_STEP;
}

void SportsCar::Booster()
{
	if (fuelGauge == 0)//fuel gauge check
	{
		cout << " Fuel is empty " << endl;
		cout << " Out of Booster  " << endl;
		return;
	}
	else
	{
		if (fuelGauge >= SPORTSCAR_CONST::BOOSTER_STEP)
		{
			curSpeed = SPORTSCAR_CONST::BOOSTER_SPEED;
			fuelGauge -= SPORTSCAR_CONST::BOOSTER_STEP;
			cout << " *** Asrada Booster ON!! *** " << endl;
		}
		else
		{
			cout << " Fuel is not enough " << endl;
		}
	}
}