//������ �ʱ�ȭ ����̿��� ������� �ʱ�ȭ
#include <iostream>

using namespace std;

class CTest
{
public:
	CTest()
		: m_nData1(10), m_nData2(20) //�ʱ�ȭ ���
	{} //��������� ������ �����̸� ������ �ʱ�ȭ ����� �̿�

	int m_nData1, m_nData2;

	//C++11 ����� ���ÿ� �ʱ�ȭ ����
	//int m_nData1 = 0, m_nData2 = 0;
	//int &rnData = m_nData1;

	void PrintData(void)
	{
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};

int main(void)
{
	CTest t;
	t.PrintData();

	return 0;
}