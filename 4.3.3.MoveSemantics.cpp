//작성중 -> CTestData::operator =(const CTestData&) 
#include <iostream>

using namespace std;

class CTestData
{
private:
	int m_nData;

public:
	CTestData() { cout << "CTestData()" << endl; };
	~CTestData() { cout << "~CTestData()" << endl; };

	// 변환 생성자
	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData & )" << endl;
	}

	// 이동 생성자
	CTestData(CTestData&& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData && )" << endl;
	}

	int GetData() const { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};


CTestData TestFunc(int nParam)
{
	cout << "** Test Function () : Begin ***" << endl;

	CTestData a;
	a.SetData(nParam);

	cout << "** Test Function () : End  ***" << endl;    

	return a;
}
//
//
//int main()
//{
//	CTestData b;
//
//	cout << "*Before **************" << endl;
//
//	b = TestFunc(20);
//
//	cout << "**After *************" << endl;
//
//	CTestData c(b);
//
//	return 0;
//}