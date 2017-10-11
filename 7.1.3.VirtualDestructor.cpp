#include <iostream>
using namespace std;

//하위 파생 클래스의 소멸자 호출 문제
//소멸자 가상화
//추상 자료형 Abstract Data Type

class CMyData
{
private:
	char* m_pszData;

public:
	CMyData() {	
		m_pszData = new char[32];
	}
	//~CMyData() //delete pData; 에서 호출//	 
	virtual ~CMyData() //delete pData; 에서 호출 -> ~CMyDataEx 소멸자 확인//	 
	{
		cout << "~CMyData()" << endl;
		delete m_pszData;
	}
};

class CMyDataEx : public CMyData
{
private:
	int* m_pnData;

public:
	CMyDataEx() 
	{ 
		m_pnData = new int; 
	}
	~CMyDataEx()
	{
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}
};

int main()
{
	CMyData* pData = new CMyDataEx;
	delete pData;// CMyData 소멸자 호출

	return 0;
}