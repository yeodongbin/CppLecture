
#include <iostream>
using namespace std;

//������ �ڵ�
class CTestData
{
public:
	//�Ű������� �ϳ����� �����ڴ� ���� ��ȯ�� �����ϴ�.
	//������ ���������δ� �Ұ����ϵ��� �����Ѵ�.
	explicit CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	~CTestData()
	{
		cout << "~CTestData()" << endl;
	}

	CTestData(const CTestData &rhs)
		: m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

//����� �ڵ�
//�Ű������� Ŭ������ ���� ���� �����̸� ���������� ��ȯ �����ȴ�.
void TestFunc(const CTestData &param)
{
	cout << "TestFunc(): " << param.GetData() << endl;
}

int main(void)
{
	cout << "*****Begin*****" << endl;
	//���ο� CTestData ��ü�� �����ϰ� ������ �����Ѵ�.
	TestFunc(CTestData(5));
	//�Լ��� ��ȯ�ϸ鼭 �ӽð�ü�� �Ҹ��Ѵ�.
	cout << "******End******" << endl;
	return 0;
}