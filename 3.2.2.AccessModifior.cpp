#include <iostream>

using namespace std;

class CMyData
{
	//private, protected, public
	int m_nData;

public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

//int main()
//{
//	CMyData data;
//	data.SetData(10);
//
//	//data.m_nData = 10;
//	//data.m_nData(10);
//
//	cout << data.GetData() << endl;
//
//	return 0;
//}