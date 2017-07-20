#include <iostream>
#include "standard.h"

using namespace std;

class CMyData
{
private:
	int m_nData = 0;

protected:
	void PrintData() { cout << "CMData::PrintData()" << endl; }

public:
	CMyData() {	cout <<"CMyData()" << endl;	} //Constructor

	int GetData() { return m_nData; }
	void SetData(int nParam) {	m_nData = nParam; }
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx()	{cout << "CMyDataEx() " << endl; } //Constructor

	void TestFunc() 
	{
		PrintData();
		SetData(5);	// := CMyData::SetData(1);
		cout << CMyData::GetData() << endl;
	}

	//Overriding
	/*void SetData(int nParam)
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
	}*/
};

//int main() 
//{
//	CMyDataEx data;
//
//	data.SetData(10);
//	cout << data.GetData() << endl;
//
//	data.TestFunc();
//	cout << endl;
//
//	// reference Class
//	CMyData& rData = data; 
//	rData.SetData(1111);
//	cout << rData.GetData() << endl;
//	cout << endl;
//
//	// pointer Class
//	CMyData* pData = new CMyDataEx;
//	pData->SetData(2222);
//	cout << pData->GetData() << endl;
//	delete pData;
//
//	return 0;
//}