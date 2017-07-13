#include "standard.h"

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest() start" << endl;
	}

	CTest(const CTest &rhs) // Copy Constructor //referencer
	{
		this->m_nData = rhs.m_nData;
		cout << "CTest(const CTest &rhs) start" << endl;
	}

	CTest(int a)
	{
		this->m_nData = a;
	}

	int get_data()
	{
		return m_nData;
	}
};
//
//int main() {
//	CTest a(10);
//	CTest b(a);
//
//	cout << "a: " << a.get_data() << endl;
//	cout << "b: " << b.get_data() << endl;
//
//	return 0;
//}