// �ż���� �ɹ� �Լ��� ���Ѵ�.
#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData(int nParam) : m_nData(nParam) {};

	void PrintData()
	{
		cout << m_nData << endl;
		cout << CMyData::m_nData << endl;
		cout << this->m_nData << endl; //������ �Ǵ°�
		cout << this->CMyData::m_nData << endl;
	}

	//void PrintData(CMyData* pData) //C �ڵ� ��Ÿ�� �����ѵ�.
	//{
	//	CMyData* this = pData;
	//	cout << m_nData << endl;
	//	cout << CMyData::m_nData << endl;
	//	cout << this->m_nData << endl; //������ �Ǵ°�
	//	cout << this->CMyData::m_nData << endl;
	//}

private:
	int m_nData;
};
//
//int main()
//{
//	CMyData a(5), b(10);
//	a.PrintData();
//	b.PrintData();
//
//	/*CMyData c(15);
//	c.PrintData(&c);*/
//
//	return 0;
//}