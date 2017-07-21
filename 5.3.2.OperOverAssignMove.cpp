#include <iostream>
using namespace std;
//작성중
class CMyData
{
private:
	int* m_pnData = nullptr; //예약어 C11

public:
	explicit CMyData(int nParam)
	{
		cout << "CMyData(int)" << endl;
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; };

	operator int(void) { return *m_pnData; };//?

	void operator=(const CMyData &rhs) // 
	{
		if (this == &rhs)
			return;

		delete m_pnData; // 기존 것을 삭제
		m_pnData = new int(*rhs.m_pnData); 
	}


	//복합대입연산자 += , -=
	CMyData& operator+=(const CMyData &rhs) // 
	{
		int* pnNewData = new int(*m_pnData);
		*pnNewData += *rhs.m_pnData;

		delete m_pnData; // 기존 것을 삭제
		m_pnData = pnNewData;

		return *this;
	}

	// = 이동 대입 연산자 다중 정의
	CMyData& operator=(CMyData &&rhs)
	{
		cout << "operator=(Move)" << endl;

		//얇은 복사 - 주소만 복사
		m_pnData = rhs.m_pnData;
		rhs.m_pnData = NULL;

		return *this;
	}
};

//
//int main()
//{
//	CMyData a(0), b(5);
//	a = b;
//	cout << a << endl; //자동형변환
//
//	CMyData c(0), d(5);
//	c += d;
//	cout << c << endl;
//
//	return 0;
//}