// virtual ��ȯ�� �ǹ��Լ���
// �Ϲ� �ż���� ���� ������ ������, �����Լ��� �� ������ ������.

#include <iostream>
using namespace std;

class CMyData
{
protected:
	int m_nData = 10;

public:
	virtual void PrintData() //final // ������ ���� //�����Լ� ����, ���� - ���� ����
	{
		cout << " CMyData: = " << m_nData << endl;
	}
	void TestFunc()
	{
		cout << " void TestFunc()" << endl;
		PrintData();
		cout << "*******************" << endl;
	}
	int GetData(){return m_nData;}
	void SetData(int nParam){m_nData = nParam;}
};

class CMyDataEx : public CMyData 
{
public:
	virtual void PrintData() //������
	{
		cout << " CMyDataEx: = " << m_nData * 2 << endl;
	}
};

int main()
{
	CMyDataEx a;
	a.PrintData();

	CMyData& b = a; //b ���� ����, a ������ ȣ��
	b.PrintData();

	a.TestFunc();

	return 0;
}