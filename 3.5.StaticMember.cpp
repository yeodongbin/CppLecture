//정적 멤버는 전역 변수 , 전역 함수 와 동일
//선언과 정의를 분리

#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(int nParam) : m_nData(nParam) { m_nCount++; }

	int GetData() { return m_nData; };
	static int GetCount() { return m_nCount; };

	void ResetCount() { m_nCount = 0; };

private:
	int m_nData;
	static int m_nCount ; // 정적 멤버 변수의 선언 //메모리에 고정
};

int CTest::m_nCount = 0; // 정적 멤버 변수의 정의
//
//int main()
//{
//	CTest a(5), b(10), c(15);
//
//	cout <<  a.GetCount() <<endl;
//
//	b.ResetCount();
//	cout << CTest::GetCount() << endl;
//
//	return 0;
//}