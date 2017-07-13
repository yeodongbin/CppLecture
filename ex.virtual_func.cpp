#include "standard.h"

using namespace std;

class CMyData
{
protected:
	int m_nData = 10;
public:
	virtual void PrintData() 
	{
		cout << " CMyData: = " << m_nData << endl;
	}

	void TestFunc()
	{
		PrintData();
		cout << "*******************" << endl;
	}

	int GetData()
	{
		return m_nData;
	}

	void SetData(int nParam)
	{
		m_nData = nParam;
	}
};

class CMyDataEx : public CMyData 
{
public:
	virtual void PrintData() //Real
	{
		cout << " CMyData: = " << m_nData * 2 << endl;
	}
};

//int main()
//{
//	CMyDataEx a;
//	a.PrintData();
//	cout << endl;
//
//	CMyData& b = a;
//	b.PrintData();
//
//	a.TestFunc();
//}