#include "ex.Car.h"
#define FUEL_MAX (400)

void main(void)
{
	/*Car ae86;
	ae86.InitMembers("Initial_D", FUEL_MAX);
	ae86.ShowCarState();
	ae86.Accel();
	ae86.Accel();
	ae86.Accel();
	ae86.Accel();
	ae86.ShowCarState();
	ae86.Break();
	ae86.ShowCarState();*/

	SportsCar Asrada;
	Asrada.InitMembers("dongbin", FUEL_MAX);
	Asrada.ShowCarState();
	Asrada.Accel();
	Asrada.Accel();
	Asrada.Accel();
	Asrada.Accel();
	Asrada.ShowCarState();
	Asrada.Break();
	Asrada.ShowCarState();
	Asrada.Booster();
	Asrada.ShowCarState();

	return;
}