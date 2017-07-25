//��������Ŭ������ ���������Լ��� �⺸�� ���� Ŭ������ 

#include <iostream>

using namespace std;

class CMyInterface  //��������Ŭ����
{
public:
	CMyInterface()
	{
		cout << "CMyInterface()" << endl;
	}

	//���� �����Լ��� ����
	virtual int GetData() const = 0;
	virtual void SetData(int nParam) = 0;
};


class CMyData : CMyInterface
{
private:
	int m_nData;

public:
	CMyData() { cout << "CMyData" << endl; }

	//���� �����Լ��� ���� �ݵ��
	virtual int GetData() const { return m_nData; }
	virtual void SetData(int nParam) { m_nData = nParam; }
};
//
//int main()
//{
//	//��������Ŭ������ �ν��Ͻ��� ����, ������ �� ����.
//	//CMyinterface a; �Ұ�
//	CMyData a;
//	a.SetData(5);
//
//	cout << a.GetData() << endl;
//
//	return 0;
//}