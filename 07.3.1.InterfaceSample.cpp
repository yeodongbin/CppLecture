#include <iostream>	

using namespace std;

//�������̽��� ���� �ٸ� �� ��ü�� ���� �´�� ��ȣ�ۿ��� �� �ִ� ��γ� ���

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