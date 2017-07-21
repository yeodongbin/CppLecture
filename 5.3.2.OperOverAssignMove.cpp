#include <iostream>
using namespace std;
//�ۼ���
class CMyData
{
private:
	int* m_pnData = nullptr; //����� C11

public:
	explicit CMyData(int nParam)
	{
		cout << "CMyData(int)" << endl;
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; };

	operator int(void) { return *m_pnData; };//?

	void operator=(const CMyData &rhs) // 
	{
		if (this == &rhs)
			return;

		delete m_pnData; // ���� ���� ����
		m_pnData = new int(*rhs.m_pnData); 
	}


	//���մ��Կ����� += , -=
	CMyData& operator+=(const CMyData &rhs) // 
	{
		int* pnNewData = new int(*m_pnData);
		*pnNewData += *rhs.m_pnData;

		delete m_pnData; // ���� ���� ����
		m_pnData = pnNewData;

		return *this;
	}

	// = �̵� ���� ������ ���� ����
	CMyData& operator=(CMyData &&rhs)
	{
		cout << "operator=(Move)" << endl;

		//���� ���� - �ּҸ� ����
		m_pnData = rhs.m_pnData;
		rhs.m_pnData = NULL;

		return *this;
	}
};

//
//int main()
//{
//	CMyData a(0), b(5);
//	a = b;
//	cout << a << endl; //�ڵ�����ȯ
//
//	CMyData c(0), d(5);
//	c += d;
//	cout << c << endl;
//
//	return 0;
//}