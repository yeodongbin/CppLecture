//////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : Default parameter
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////



#include <iostream>
using namespace std;

int TestFunc(int nParam = 10)
{
	return nParam;
}

int TestFunc2(int nParam1, int nParam2 = 10)
{// Parmeter value change
	return nParam1 * nParam2;
}

//int TestFunc3(int nParam1 = 20, int nParam2 = 10 , int nParam3)
//{// Parmeter value change
//	return nParam1 * nParam2 * nParam3;
//}

int Add(int a, int b, int c)
{
	cout << "Add(int, int, int) : ";
	return a + b + c;
}

int Add(int a, int b)
{
	cout << "Add(int, int)      : ";
	return a + b;
}

double Add(double a, double b)
{
	cout << "Add(double, double): ";
	return a + b ;
}

//int TestFunc(int a,int nParam = 10)
//{
//	return nParam;
//}
//
//int main()
//{
//	cout << TestFunc() << endl;
//	cout << TestFunc(20) << endl;
//
//	cout << TestFunc2(10) << endl;
//	cout << TestFunc2(10,5) << endl;
//
//	//cout << TestFunc3(30) << endl;  //sError generation
//
//	//Polymorphism
//	cout << Add(3, 4) << endl;
//	cout << Add(3, 4,5) << endl;
//	cout << Add(3.3, 4.4) << endl;
//
//	return 0;
//}