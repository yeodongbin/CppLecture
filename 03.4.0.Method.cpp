
#include <iostream>
using namespace std;

//********************* CLASS DEFIND ***************************

class CTest
{
	int& m_nData;

public:
	CTest(int &rParam) : m_nData(rParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	int get_data()
	{
		return m_nData;
	}

	int set_data(int tempData)
	{
		m_nData = tempData;
	}

	int test;
	
	template<typename T>
	void print_value(T value)
	{
		cout << value << endl;
	}
};

class CUserData
{
	//constructor
	CUserData()
		: nTest(10), nAge(30), nRef(nAge) //Initize Value
	{
		cout << " Start Constructor " << endl;
		//nTest = 10;  it is not possible to make values, class was not yet made. 
	}
	//distructor
	~CUserData()
	{
		cout << " End Distructor " << endl;
	}

	int nTest;
public:
	int nAge;
	int &nRef;  // reference Value must be initized // nRef(nAge) 
	char szName[32];

	void print_self()
	{
		printf("%d %s\n", nAge, szName);
	}
};
//
//
//int main()
//{
//	CTest vTest();
//	vTest.test = 10;
//	CTest* dyCTest = new CTest;
//	dyCTest.test = 20;
//	delete dyCTest;
//
//}