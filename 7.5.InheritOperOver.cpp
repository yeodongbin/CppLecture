#include <iostream>

using namespace std;

class CMyData
{
protected:
	int m_nData = 0;

public:
	CMyData(int nParam) : m_nData(nParam) {	}

	CMyData operator+(const CMyData &rhs)
	{
		return CMyData(m_nData + rhs.m_nData);
	}

	CMyData operator=(const CMyData &rhs)
	{
		m_nData = rhs.m_nData;

		return *this;
	}

	operator int() { return m_nData; }
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx(int nParam) : CMyData(nParam) {}

	// + �����ڸ� CMyDataEx Ÿ�Կ� �������
	CMyDataEx operator+(const CMyDataEx &rhs) //> �ذ�å
	{
		return CMyDataEx(static_cast<int>(CMyData::operator+(rhs)));
	}

	//using CMyData::operator+; //> �ذ�å
	//using CMyData::operator=; //> �ذ�å
};
//
//int main()
//{
//	CMyData a(3), b(4);
//	cout << a + b << endl;
//
//	CMyDataEx c(3), d(4), e(0);
//
//	e = c + d; // �ܼ� ���Կ����� (=) �� ��� ���� -> �ذ�å
//	// ������ ��ȯ�� ��ӵ��� �ʴ´�.
//	cout << e << endl;
//	
//	return 0;
//}