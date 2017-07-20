#include <iostream>

using namespace std;

// The constructor can make 2 more it.
// The destructor only can make 1 thing;

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	//Second
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

//
//CTest a; // First Call != C language
//
//int main()
//{
//	cout << " Begin" << endl;
//	cout << " End" << endl;
//
//	return 0;
//}
