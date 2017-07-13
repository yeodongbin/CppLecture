#include "standard.h"

void cPlusPlusBasic()
{
	int vInt;
	std::cout << " Hello World" << std::endl;
	std::cin >> vInt;
	std::cout << vInt << std::endl;

	int nData = 10;
	int &ref = nData;
	int &ref_1 = nData;

	std::cout << nData << std::endl;
	std::cout << ref << std::endl;

	//////////////////////////////////////////////
	ref = 20;
	std::cout << nData << std::endl;
	std::cout << ref << std::endl;

	int aList[5] = { 10, 20 , 30 , 40 , 50 };

	for (auto n : aList)
	{
		std::cout << "\n" << std::endl;
		std::cout << n << std::endl;
	}

	//////////////////////////////////////////////
	std::cout << "Enter number : ";
	std::cin >> nData;

	int&& rData = nData + 5;
	std::cout << rData << std::endl;
}