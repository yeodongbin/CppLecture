//공통점 
// 생성, 소멸시 자동 생성됨, 클래시명과 동일, 반환형식이 없다.
//차이점
// 소멸자에는 ~ 붙는다.
// The constructor can make 2 more it.
// The destructor only can make 1 thing;

//디폴트 생성자, 소멸자

#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	//3 생성자는 다중정의 가능(다형성)
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

//2
//CTest a; // C와 달리 C++은 전역변수가 먼저 생성

int main()
{
	cout << " Begin" << endl;
	CTest a; // First Call != C language
	cout << " End" << endl;

	return 0;
}//소멸자는 선언된 블록 범위가 끝나면 자동 소멸
