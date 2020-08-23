//////////////////////////////////////////////////////////////////////
// Date : 2017-09-28
// Title : Range Based For 
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	int aList[5] = { 10, 20 , 30 , 40 , 50 };

	cout << "- Standard For " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << aList[i] << endl;
	}

	cout << "- auto For " << endl;
	for (auto n : aList)
	{
		std::cout << n << std::endl;
	}
	for (auto n : aList)
	{
		std::cout << n << std::endl;
		n += 1;
	}

	cout << "- Auto+Reference Type For " << endl;
	for (auto &n : aList)
	{
		std::cout << n << std::endl;
		n += 1;
	}
	for (auto n : aList)
	{
		std::cout << n << std::endl;
	}

	//2차원 배열 출력
	int a2List[3][5] = {
		{ 10, 20 , 30 , 40 , 50 },
		{ 11, 21 , 31 , 41 , 51 },
		{ 12, 22 , 32 , 42 , 52 } };
	for (auto &n : a2List)
	{
		for (auto &m : n)
		{
			std::cout << m << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}