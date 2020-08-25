#include <iostream>	

using namespace std;

//인터페이스는 서로 다른 두 객체가 서로 맞닿아 상호작용할 수 있는 통로나 방법

class CMyObject
{
protected:
	int m_nDeviceID;

public:
	CMyObject() { }
	virtual ~CMyObject(){ }

	virtual int GetDeviceID() = 0;
};

void PrintID(CMyObject *pObj)
{
	cout << "Device ID : " << pObj->GetDeviceID() << endl;
}

class CMyTV : public CMyObject
{
public:
	CMyTV(int nID) { m_nDeviceID = nID; }

	virtual int GetDeviceID()
	{
		cout << "CMyTV :  GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

class CMyPhone : public CMyObject
{
public:
	CMyPhone(int nID) { m_nDeviceID = nID; }

	virtual int GetDeviceID()
	{
		cout << "CMyPhone::GetDeviceID()" << endl;
		return m_nDeviceID;
	}
};

int main()
{
	CMyTV a(5);
	CMyPhone b(10);

	::PrintID(&a);
	::PrintID(&b);

	return 0;
}