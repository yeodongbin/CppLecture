#include <iostream>

using namespace std;

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

//
//int main()
//{
//	cout << "** Begin **" << endl;
//
//	CTest* pTest = new CTest; // Dynamic allocation
//	cout << "  Test" << endl;
//	delete pTest;
//	cout << endl;
//
//	CTest* pArray = new CTest[4]; // Dynamic Array Allocation
//	cout << "  Test[]" << endl;
//	delete[] pArray;
//
//	cout << "** End **" << endl;
//
//	return 0;
//}
