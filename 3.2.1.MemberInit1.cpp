#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()              //class ��� ����, ��ȯ�� ����
	{
		cout << "**CTest() ������ �Լ� ����" << endl;
		m_nData = 10;    //�ν��Ͻ� ���� -> �ʱ�ȭ
	}

	int m_nData;         //��� int�� ����
	void PrintData(void) //��� �Լ�
	{
		cout << m_nData << endl;
	}
	//2 �ܺ� ���Ǹ� ���� ����
	//void PrintData(void);
};

//2 �ܺο� ����Լ��� ������ �� ����
//void CTest::PrintData(void)
//{
//	cout << "�ܺ� "<<m_nData << endl;
//}

int main(void)
{
	cout << "main �Լ� ����" << endl;
	CTest t;             //Ŭ����Ÿ�� Ŭ������//�ν��Ͻ� ����
	t.PrintData();
	cout << "main �Լ� ����" << endl;

	return 0;
}