#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

public:
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()"<< m_nData << endl;
	}
};

int main()
{
	cout << " Begin" << endl;
	CTest a(1);
	//CTest a; 생성자 만들면 디폴트 생성자 생략 
	//생성자가 무조건 받는다.
	cout << " Before b" << endl;
	CTest b(3);
	cout << " End" << endl;

	return 0;
}