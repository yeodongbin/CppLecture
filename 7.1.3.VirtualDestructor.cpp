#include <iostream>
using namespace std;

//하위 파생 클래스의 소멸자 호출 문제

class CMyData
{
private:
	char* m_pszData;

public:
	CMyData() {	m_pszData = new char[32];}

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
	CMyDataEx() { m_pnData = new int; }

	~CMyDataEx()
	{
		cout << "~CMyDataEx()" << endl;
		delete m_pnData;
	}
};

// 예제 추가
class CMyDataEx2 : public CMyData
{
private:
	int* m_pnData;

public:
	CMyDataEx2() { m_pnData = new int; }

	~CMyDataEx2()
	{
		cout << "~CMyDataEx2()" << endl;
		delete m_pnData;
	}
};
//
//int main()
//{
//	CMyData* pData = new CMyDataEx;
//	CMyData* pData2 = new CMyDataEx2;
//
//	delete pData;// CMyData 소멸자 호출
//	delete pData2;
//
//	return 0;
//}