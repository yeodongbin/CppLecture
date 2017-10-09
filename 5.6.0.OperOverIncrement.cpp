// OperOverIncrement.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
#include <iostream>
using namespace std;

class CMyData
{
private:
	int m_nData = 0;

public:
	CMyData(int nParam) : m_nData(nParam) {}

	//형식변환
	operator int() { return m_nData; }
	//전위 증가 연산자
	int operator++()
	{
		cout << "operator++()" << endl;
		return ++m_nData;
	}
	//후위 증가 연산자
	int operator++(int)
	{
		cout << "operator++(int)" << endl;
		int nData = m_nData;
		m_nData++;
		return nData;
	}
};

int main()
{
	CMyData a(10);

	//전위 증가 연산자를 호출한다.
	cout << ++a << endl;
	//후위 증가 연산자를 호출한다.
	cout << a++ << endl;
	cout << a << endl;

	return 0;
}