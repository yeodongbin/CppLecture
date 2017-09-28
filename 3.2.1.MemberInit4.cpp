//생성자 초기화 목록이용한 멤버변수 초기화
#include <iostream>

using namespace std;

class CTest
{
public:
	CTest()
		: m_nData1(10), m_nData2(20) //초기화 목록
	{} //멤버변수가 참조자 형식이면 무조건 초기화 목록을 이용

	int m_nData1, m_nData2;

	//C++11 선언과 동시에 초기화 가능
	//int m_nData1 = 0, m_nData2 = 0;
	//int &rnData = m_nData1;

	void PrintData(void)
	{
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};

int main(void)
{
	CTest t;
	t.PrintData();

	return 0;
}