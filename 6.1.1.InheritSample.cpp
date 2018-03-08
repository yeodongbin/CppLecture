// class �Ļ�Ŭ���� �̸�(�ڽ� Ŭ����) : �������������� �θ�Ŭ���� �̸�

#include <iostream>
using namespace std;

class CMyData
{
public:		//������ ���� ����
	CMyData() { cout << "CMyData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

protected:	//�Ļ� Ŭ������ ���� ����
	void PrintData() { cout << "CMyData::PrintData()" << endl; }

private:	//������ ���� �Ұ���
	int m_nData = 0;
};

class CMyDataEx : public CMyData // ��� CMyDataEx <<<<<<<<< CMyData
{
public:
	CMyDataEx() { cout << "CMyDataEx() " << endl; } //Constructor

	void TestFunc()
	{
		PrintData();
		SetData(5);	// := CMyData::SetData(1);
		cout << CMyData::GetData() << endl;
	}
	//Overriding //6.2 �ż��� ������
	void SetData(int nParam)
	{
		if (nParam < 0)
		{
			CMyData::SetData(0);
			cout << " Overriding " << endl;
		}

		if (nParam > 10)
		{
			CMyData::SetData(10);
			cout << " Overriding " << endl;
		}
	}
};

int main()
{
	CMyDataEx data;

	data.SetData(10);
	cout << data.GetData() << endl;

	data.TestFunc();
	cout << endl;

	// reference Class
	CMyData& rData = data;
	rData.SetData(1111);
	cout << rData.GetData() << endl;
	cout << endl;

	// pointer Class
	CMyData* pData = new CMyDataEx;
	pData->SetData(2222);
	cout << pData->GetData() << endl;
	delete pData;

	return 0;
}