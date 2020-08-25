// 이동 생성자
// 이동 대입연산자
// 임시 객체가 발생하면 부하를 최소

#include <iostream>
using namespace std;

//제작자 코드
class CTestData
{
private:
	int m_nData = 0;

public:
	CTestData() { cout << "CTestData()" << endl; }
	~CTestData() { cout << "~CTestData()" << endl; }

	//복사생성자
	CTestData(const CTestData &rhs) //깊은 복사
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	//이동 생성자
	CTestData(const CTestData &&rhs)
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &&)" << endl;
	}

	//이동 대입 연산자
	CTestData& operator=(CTestData &rhs)
	{
		return rhs;
	}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

CTestData TestFunc(int nParam)
{
	cout << "**TestFunc(): Begin***" << endl;
	CTestData a;
	a.SetData(nParam);
	cout << "**TestFunc(): End*****" << endl;

	return a;
}

int main(void)
{
	CTestData b;
	cout << "*Before***************" << endl;
	b = TestFunc(20);
	cout << "*After****************" << endl;
	CTestData c(b);
	return 0;
}

