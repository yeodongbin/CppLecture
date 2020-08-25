#include <iostream>

using namespace std;

class CMyData
{
private:
	int* m_pnData = nullptr;

public:
	CMyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}
	CMyData(const CMyData &rhs) //복사 연산자
	{
		cout << "CMyData (const CMyData &) " << endl;

		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~CMyData()
	{
		delete m_pnData;
	}

	//Oper Over
	CMyData& operator=(const CMyData& rhs)
	{
		*m_pnData = *rhs.m_pnData;
		return *this;
	}
	int GetData()
	{
		if (m_pnData != NULL)
			return *m_pnData;

		return 0;
	}
};

int main()
{
	//Deep Copy
	CMyData a(10);
	CMyData b(10);

	//원래는 Shallow Copy -> Deep Copy
	a = b;
	cout << a.GetData() << endl;
}