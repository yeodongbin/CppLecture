#include <iostream>

using namespace std;

class CMyData
{
	int m_nData;

public:
	CMyData() {	cout << "CMyData start" << endl;}

	CMyData(const CMyData &rhs) // Copy Constructor Define / distinction
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

int main() {
	CTest a(10);
	CTest b(a);

	cout << "a: " << a.get_data() << endl;
	cout << "b: " << b.get_data() << endl;

	return 0;
}