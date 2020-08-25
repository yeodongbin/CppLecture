//��ü�� ���纻 CTest a; CTest b(a);
//�Լ� ���·� ȣ�� - Ŭ������ �Ű�����
//				   ��ȯ�������� ���

#include <iostream>
using namespace std;

//�Ű������� ���Ǵ� ���� ������
class CTestData
{
private:
	int m_nData = 0; //�ʱ�ȭ 

public:
	CTestData(int nParam) : m_nData(nParam) // ��ü ���纻���� ...
	{
		cout << "CTEstData(int)" << endl;
	}
	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)  // ��������� // = delete; //��������� ����
	{
		cout << "CTEstData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//void TestFunc(CTestData& param) //CTestData ��ü�� 1�� ����
//void TestFunc(const CTestData& param) //
//�Ű������� CTestData Ŭ���� ���� -> ��������� ȣ��
void TestFunc(CTestData param) //CTestData ��ü�� 2�� ����
{
	cout << "Test Function " << endl;
	param.SetData(20);
}

int main() {
	//�Ű������� ���Ǵ� ���� ������
	cout << "****** begin ****** " << endl;

	CTestData c(11); 
	TestFunc(c); //CTestData ��ü�� 2�� ����
	cout << "c: " << c.GetData() << endl;

	cout << "******  end  ****** " << endl;

	return 0;
}