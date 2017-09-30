#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() {};
	CTest(int nParam) : m_nData(nParam) {};
	~CTest() {};

	int GetData() const // 핵심
	{
		//m_nData = 20; //fail
		//CTest::m_nData = 20; //fail
		//this->m_nData = 20; //fail
		//this->CTest::m_nData = 20; //fail

		//m_nData2 = 20; //mutable
		
		// const method 에서도 변경가능(예외)
		//int& m_nNewData = const_cast<int&> (m_nData);
		//m_nNewData = 20;

		return m_nData;
	}

	void SetData(int nParam) { m_nData = nParam; }
	void SetData(double nParam) { m_nData = 0; } //Member Functin Multi Define 2
	//void SetData(double nParam) = delete; //차단 3

private:
	int m_nData = 0;
	mutable int m_nData2 = 0; // const method 에서도 변경가능(예외)
};

int main()
{
	CTest a(10);
	cout << a.GetData() << endl;

	//Member Functin Multi Define 2
	CTest b;
	CTest c;
	b.SetData(11);
	c.SetData(1.2);
	cout << b.GetData() << endl;
	cout << c.GetData() << endl;

	return 0;
}