#include <iostream>
using namespace std;

//���� �Ļ� Ŭ������ �Ҹ��� ȣ�� ����

class CMyData
{
private:
	char* m_pszData;

public:
	CMyData() {	m_pszData = new char[32];}

	//~CMyData() //delete pData; ���� ȣ��//	 
	virtual ~CMyData() //delete pData; ���� ȣ�� -> ~CMyDataEx �Ҹ��� Ȯ��//	 
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

// ���� �߰�
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
//	delete pData;// CMyData �Ҹ��� ȣ��
//	delete pData2;
//
//	return 0;
//}