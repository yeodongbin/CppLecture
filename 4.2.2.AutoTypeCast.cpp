#include <iostream>

using namespace std;

class CTestData
{
private:
	int m_nData;

public :
	//explicit CTestData(int nParam) : m_nData(nParam) // ��ȯ �����ڸ� ��Ȯ�� ����� ����
													   // TestFunc (CTestData(5));	
	CTestData(int nParam) : m_nData(nParam) // ��ȯ ������
	{
		cout << "CTestData(int nParam)"<<endl;
	}

	//��ȯ �����ڰ� ���� ��� CTestData <-> int(void) ����ȯ�� ��������
	operator int(void) { return m_nData; } //����ȯ ������

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData & )" << endl;
	}

	int GetData() const { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//void TestFunc(const CTestData& param)
void TestFunc(CTestData param)
{
	cout << "Test Function () : " << param.GetData()<< endl; 
}

int main()
{
	TestFunc(5); // =TestFunc(CTestData(5));

	CTestData a(10);

	cout<< a.GetData() << endl;
	cout<< a << endl;
	cout<< (int) a << endl;
	cout<< static_cast<int>(a) << endl;

	return 0;
}