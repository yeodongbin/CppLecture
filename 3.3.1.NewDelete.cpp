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

	//2 ��ü�� ������ �����ڸ� ȣ���Ѵ�.
	CTest* pArray = new CTest[4]; // Dynamic Array Allocation
	cout << "  Test[]" << endl;
	delete[] pArray;//�迭�� �������� ->1���� ���������ɼ� �ִ�.
	//delete pArray;

	cout << "** End **" << endl;

	return 0;
}
