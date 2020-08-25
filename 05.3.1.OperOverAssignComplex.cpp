#include <iostream>

using namespace std;

class CMyData
{
private:
	int* m_pnData = nullptr;

public:
	explicit CMyData(int nParam)
	{
		cout << "CMyData(int)" << endl;
		m_pnData = new int(nParam);
	}
	CMyData(const CMyData &rhs)
	{
		cout << "CMyData(const CMyData &rhs)" << endl;
		m_pnData = new int(*rhs.m_pnData);
	}
	~CMyData () //소멸자
	{
		delete m_pnData; //동적할당 해제
	}

	operator int() { return *m_pnData; }
	CMyData operator+(const CMyData &rhs)
	{
		return CMyData(*m_pnData + *rhs.m_pnData);
	}
	CMyData& operator=(const CMyData &rhs)
	{
		cout << "CMyData& operator=(const CMyData &rhs)" << endl;
		if (this == &rhs) {return *this;}
		delete m_pnData;
		m_pnData = new int(*rhs.m_pnData);

		return *this;
	}
	CMyData& operator=(CMyData &&rhs)
	{
		cout << "CMyData& operator=(Move)" << endl;
		m_pnData = rhs.m_pnData;
		rhs.m_pnData = NULL;

		return *this;
	}
};

int main(void)
{
	CMyData a(0), b(3), c(4);
	cout << "***** Before ******" << endl;

	a = b + c;
	cout << "***** After ******" << endl;

	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}