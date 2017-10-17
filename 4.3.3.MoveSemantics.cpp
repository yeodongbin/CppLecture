// �̵� ������
// �̵� ���Կ�����
// �ӽ� ��ü�� �߻��ϸ� ���ϸ� �ּ�

#include <iostream>
using namespace std;

//������ �ڵ�
class CTestData
{
private:
	int m_nData = 0;

public:
	CTestData() { cout << "CTestData()" << endl; }
	~CTestData() { cout << "~CTestData()" << endl; }

	//���������
	CTestData(const CTestData &rhs) //���� ����
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	//�̵� ������
	CTestData(const CTestData &&rhs)
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &&)" << endl;
	}

	//�̵� ���� ������
	CTestData& operator=(CTestData &rhs)
	{
		return rhs;
	}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

CTestData TestFunc(int nParam)
{
	cout << "**TestFunc(): Begin***" << endl;
	CTestData a;
	a.SetData(nParam);
	cout << "**TestFunc(): End*****" << endl;

	return a;
}

int main(void)
{
	CTestData b;
	cout << "*Before***************" << endl;
	b = TestFunc(20);
	cout << "*After****************" << endl;
	CTestData c(b);
	return 0;
}

