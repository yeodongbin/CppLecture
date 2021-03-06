//////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : Namespace
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

//Second Lecture of Namespace 1
void TestFunc(void) {	cout << "TEST::TestFunc() Global Variable" << endl; }

// Namespace TEST
namespace TEST 
{
	int gNumData = 100;
	
	namespace TEST_DEV
	{
		int gNumData = 200;
		
		namespace TEST_DEV_WIN
		{
			int gNumData = 300;
		}
	}

	void test_func(void) 
	{
		cout << TEST::gNumData << endl;
	}

	int test_func2(int param = 10) 
	{
		return param;
	}

	int test_func3(int param1 , int param2 = 10 )
	{
		return param1 + param2;
	}

	//Second Lecture of Namespace 2
	void TestFunc(void)
	{
		cout << "TEST::TestFunc() TEST Namespace" << endl;
	}
}

// Namespace CALCUL
namespace CALCUL
{
	int add_int(int a, int b)
	{
		return a + b;
	}

	double add_double(double a, double b)
	{
		return a + b;
	}

	int add_3int(int a, int b, int c)
	{
		return a + b + c;
	}

	//value type
	template <typename T>
	T add_tmpl(T a, T b)
	{
		return a + b;
	}
}

namespace MYDATA
{
	//Second Lecture of Namespace 3
	void TestFunc(void)
	{
		cout << "TEST::TestFunc() MYDATA" << endl;
	}
}

//using namespace TEST; //Second Lecture
using namespace CALCUL;

//
//int main()
//{
//	//test_func();
//
//	//cout << gNumData << endl;
//	//cout << TEST_DEV::gNumData << endl;
//	//cout << TEST_DEV::TEST_DEV_WIN::gNumData << endl;// Namespace Util
//
//	//////////////////////////////////////// parameter initialize
//	//cout << test_func2(40) << endl;
//
//	//////////////////////////////////////// parameter initialize2
//	//cout << test_func3(40) << endl;
//	//cout << test_func3(40, 60) << endl;
//
//	// Second Lecture Call 
//	TestFunc(); //Implied Global variable
//	::TestFunc(); //Explicit Global variable
//	TEST::TestFunc();
//	MYDATA::TestFunc();
//
//	return 0;
//}