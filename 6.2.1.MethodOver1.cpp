// MethodOver.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.

#include <iostream>
using namespace std;

//�ʱ� ������
class CMyData
{
private:
	int m_nData = 0;
public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

//�ı� ������
class CMyDataEx : public CMyData
{
public:
	//�Ļ� Ŭ�������� �⺻ Ŭ������ �޼��带 �������ߴ�.
	void SetData(int nParam)
	{
		//�Է� �������� ���� �����ϴ� ���ο� ����� �߰��Ѵ�.
		if (nParam < 0)	{ CMyData::SetData(0);	}
		if (nParam > 10){ CMyData::SetData(10);	}
	}
};

//�����
int main()
{
	CMyDataEx a;
	CMyData &rData = a;
	rData.SetData(15);
	cout << rData.GetData() << endl;
	return 0;
}

