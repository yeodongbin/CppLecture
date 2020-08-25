// TempObject.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.


#include <iostream>
using namespace std;

//������ �ڵ�
class CTestData
{
public:
	CTestData(int nParam, char *pszName)
		: m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTestData(int): " << m_pszName << endl;
	}

	~CTestData()
	{
		cout << "~CTestData(): " << m_pszName << endl;
	}

	CTestData(const CTestData &rhs)
		: m_nData(rhs.m_nData), m_pszName(rhs.m_pszName)
	{
		cout << "CTestData(const CTestData &): " << m_pszName << endl;
	}

	CTestData& operator=(const CTestData &rhs)
	{
		//���� ���������� �̸�(m_pszName)�� �״�� �д�.
		m_nData = rhs.m_nData;
		return *this;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
	char *m_pszName = nullptr;	//�������� �����ϱ� ���� ���.
};

//CTestData ��ü�� ��ȯ�ϴ� �Լ��̴�.
CTestData TestFunc(int nParam)
{
	//CTestData Ŭ���� �ν��Ͻ��� a�� ����������.
	//���� �Լ��� ��ȯ�ϸ� �Ҹ��Ѵ�.
	CTestData a(nParam, "a");
	return a;
}



int main(void)
{
	CTestData b(5, "b");
	cout << "*****Before*****" << endl;

	//�̸� ���� �ӽ� ��ü�� _tmain() �Լ��� ��ȯ�� �� �Ҹ��Ѵ�.
	//b = TestFunc(10);
	TestFunc(10);
	CTestData &rData = TestFunc(10);
	cout << "*****After*****" << endl;
	cout << b.GetData() << endl;

	return 0;
}

