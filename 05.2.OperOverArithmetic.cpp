//����� �����ڴ� �����ϸ� �ȵȴ�.
// ��� �� �����ڴ� ���� �����ؼ��� �ȵȴ�.

#include <iostream>
using namespace std;

class CMyData
{
private:
	int m_nData = 0;

public:
	// ��ȯ ������
	CMyData(int nParam) : m_nData(nParam)
	{
		cout << "CMyData(int)" << endl;
	}

	//���� ������
	CMyData(const CMyData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &)" << endl;
	}

	//�̵�������
	CMyData(const CMyData &&rhs) : m_nData(rhs.m_nData)
	{
		cout << "CMyData(const CMyData &&)" << endl;
	}

	//����ȭ
	operator int() 
	{ 
		return m_nData; 
	}

	// + ������ ���� ����
	CMyData operator+(const CMyData &rhs)
	{
		cout << "operator+" << endl;
		CMyData result(0);
		result.m_nData = this->m_nData + rhs.m_nData;//��� ������ ����

		return result;
	}

	// + ������ ���� ����2
	CMyData operator+(const int nParam)
	{
		cout << "operator+2" << endl;
		CMyData result(0);
		result.m_nData = this->m_nData + nParam;

		return result;
	}

	// = ���� ������
	CMyData& operator=(const CMyData &rhs)
	{
		cout << "operator=" << endl;
		m_nData = rhs.m_nData + 1;

		return *this;
	}
};

int main()
{
	cout << "=======begin=========" << endl;
	CMyData a(0), b(3), c(6);

	// b + c ������ �����ϸ� �̸����� �ӽ� ��ü�� ���������
	// a�� �����ϴ� ���� �ӽ� ��ü��.
	a = b + c;

	//a = b.operator+(c); // �ٽ��� ����
	//a.operator = (b.operator+(c));
	//a = �ӽð�ü
	//������ �Լ��� �������� ����..
	cout << a << endl;
	cout << "=======end  =========" << endl;

	return 0;
}