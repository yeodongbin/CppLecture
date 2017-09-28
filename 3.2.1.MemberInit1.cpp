#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()              //class 명과 동일, 반환값 없음
	{
		cout << "**CTest() 생성자 함수 시작" << endl;
		m_nData = 10;    //인스턴스 생성 -> 초기화
	}

	int m_nData;         //멤버 int형 변수
	void PrintData(void) //멤버 함수
	{
		cout << m_nData << endl;
	}
	//2 외부 정의를 위한 선언
	//void PrintData(void);
};

//2 외부에 멤버함수를 정의할 수 있음
//void CTest::PrintData(void)
//{
//	cout << "외부 "<<m_nData << endl;
//}

int main(void)
{
	cout << "main 함수 시작" << endl;
	CTest t;             //클래스타입 클래스명//인스턴스 생성
	t.PrintData();
	cout << "main 함수 종료" << endl;

	return 0;
}