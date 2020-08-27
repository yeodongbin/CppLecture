#include <iostream>

using namespace std;

class CMyData
{
protected:
	int m_nData = 0;

public:
	CMyData(int nParam) : m_nData(nParam) {	}

	CMyData operator+(const CMyData &rhs)
	{
		return CMyData(m_nData + rhs.m_nData);
	}

	CMyData operator=(const CMyData &rhs)
	{
		m_nData = rhs.m_nData;

		return *this;
	}

	operator int() { return m_nData; }
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx(int nParam) : CMyData(nParam) {}

	// + 연산자를 CMyDataEx 타입에 맞춰생성
	CMyDataEx operator+(const CMyDataEx &rhs) //> 해결책
	{
		return CMyDataEx(static_cast<int>(CMyData::operator+(rhs)));
	}

	//using CMyData::operator+; //> 해결책
	//using CMyData::operator=; //> 해결책
};
//
//int main()
//{
//	CMyData a(3), b(4);
//	cout << a + b << endl;
//
//	CMyDataEx c(3), d(4), e(0);
//
//	e = c + d; // 단순 대입연산자 (=) 이 없어서 에러 -> 해결책
//	// 연산자 변환은 상속되지 않는다.
//	cout << e << endl;
//	
//	return 0;
//}