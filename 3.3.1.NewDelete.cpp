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


int main()
{
	cout << "** Begin **" << endl;

	CTest* pTest = new CTest; // Dynamic allocation
	cout << "  Test" << endl;
	delete pTest;
	cout << endl;

	//2 객체는 무조건 생성자를 호출한다.
	CTest* pArray = new CTest[4]; // Dynamic Array Allocation
	cout << "  Test[]" << endl;
	delete[] pArray;//배열로 동적해제 ->1개만 동적해제될수 있다.
	//delete pArray;

	cout << "** End **" << endl;

	return 0;
}
