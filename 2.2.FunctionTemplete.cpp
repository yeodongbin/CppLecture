//////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : Template , Inline
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <typename T>
T TestFunc(T a)
{
	cout << "Parameter a: " << a << endl;
	return a;
}

template <typename U>
U Add(U a, U  b)
{
	return a + b;
}


////  Inline function  /////////////////////////////

#define ADD(a,b) ((a)+(b))

int AddOld(int a, int b)
{
	return a + b;
}

inline int AddNew(int a, int b)
{
	return a + b;
}
//
//int main()
//{
//	cout << "int\t " << TestFunc(3) << endl << endl;
//	cout << "double\t "<< TestFunc(3.3) << endl << endl;
//	cout << "char\t "<< TestFunc('a') << endl << endl;
//	cout << "char*\t "<< TestFunc("Test String") << endl << endl;
//
//	cout << "\nAdd 3 + 4 = \t " << Add<int>(3.2, 4.1) << endl; //template force setting
//
//	//Inline Function
//	int a, b; 
//	cin >> a; cin >> b;
//
//	cout << "Macro ADD : " << ADD(a,b) << endl;
//	cout << "Old ADD : " << AddOld(a,b) << endl;
//	cout << "New ADD(Inline) : " << AddNew(a,b) << endl;
//
//	return 0;
//}