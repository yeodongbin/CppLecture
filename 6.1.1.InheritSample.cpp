// class 파생클래스 이름(자식 클래스) : 접근제어지시자 부모클래스 이름

#include <iostream>
using namespace std;

class CMyData
{
public:		//누구나 접근 가능
	CMyData() { cout << "CMyData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

protected:	//파생 클래스만 접근 가능
	void PrintData() { cout << "CMyData::PrintData()" << endl; }

private:	//누구도 접근 불가능
	int m_nData = 0;
};

class CMyDataEx : public CMyData // 상속 CMyDataEx <<<<<<<<< CMyData
{
public:
	CMyDataEx() { cout << "CMyDataEx() " << endl; } //Constructor

	void TestFunc()
	{
		PrintData();
		SetData(5);	// := CMyData::SetData(1);
		cout << CMyData::GetData() << endl;
	}
	//Overriding //6.2 매서드 재정의
	void SetData(int nParam)
	{
		if (nParam < 0)
		{
			CMyData::SetData(0);
			cout << " Overriding " << endl;
		}

		if (nParam > 10)
		{
			CMyData::SetData(10);
			cout << " Overriding " << endl;
		}
	}
};

int main()
{
	CMyDataEx data;

	data.SetData(10);
	cout << data.GetData() << endl;

	data.TestFunc();
	cout << endl;

	// reference Class
	CMyData& rData = data;
	rData.SetData(1111);
	cout << rData.GetData() << endl;
	cout << endl;

	// pointer Class
	CMyData* pData = new CMyDataEx;
	pData->SetData(2222);
	cout << pData->GetData() << endl;
	delete pData;

	return 0;
}