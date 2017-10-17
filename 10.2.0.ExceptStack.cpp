#include <iostream>

using namespace std;

void TestFunc1()
{
	cout << "***Test Func1() - begin" << endl;
	//throw 1;
	cout << "***Test Func1() - end" << endl;
}

void TestFunc2()
{
	cout << "***Test Func2() - begin" << endl;
	//throw 2;
	TestFunc1();
	
	cout << "***Test Func2() - end" << endl;
}

void TestFunc3()
{
	cout << "***Test Func3() - begin" << endl;
	//throw 3;
	TestFunc2();
	
	cout << "***Test Func3() - end" << endl;
}

int main(void)
{
	try
	{
		TestFunc3();
	}

	catch (...)
	{
		cout << "Exception handing" << endl;
	}

	return 0;
}