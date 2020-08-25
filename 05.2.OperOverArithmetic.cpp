//절대로 연산자는 실패하면 안된다.
// 고로 논리 연산자는 다중 정의해서는 안된다.

#include <iostream>
using namespace std;

class CMyData
{
private:
	int m_nData = 0;

public:
	// 변환 생성자
	CMyData(int nParam) : m_nData(nParam)
	{
		cout << "CMyData(int)" << endl;
	}

	//복사 생성자
	CMyData(const CMyData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &)" << endl;
	}

	//이동생성자
	CMyData(const CMyData &&rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &&)" << endl;
	}

	//형변화
	operator int() 
	{ 
		return m_nData; 
	}

	// + 연산자 다중 정의
	CMyData operator+(const CMyData &rhs)
	{
		cout << "operator+" << endl;
		CMyData result(0);
		result.m_nData = this->m_nData + rhs.m_nData;//산술 연산자 제어

		return result;
	}

	// + 연산자 다중 정의2
	CMyData operator+(const int nParam)
	{
		cout << "operator+2" << endl;
		CMyData result(0);
		result.m_nData = this->m_nData + nParam;

		return result;
	}

	// = 대입 연산자
	CMyData& operator=(const CMyData &rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData + 1;

		return *this;
	}
};

int main()
{
	cout << "=======begin=========" << endl;
	CMyData a(0), b(3), c(6);

	// b + c 연산을 실행하면 이름없는 임시 객체가 만들어지며
	// a에 대입하는 것은 임시 객체다.
	a = b + c;

	//a = b.operator+(c); // 핵심은 가로
	//a.operator = (b.operator+(c));
	//a = 임시객체
	//연산자 함수도 다중정의 가능..
	cout << a << endl;
	cout << "=======end  =========" << endl;

	return 0;
}