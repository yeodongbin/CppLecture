
//�������� ������
//private, protected, public
//������ ������� ������ private
#include <iostream>

using namespace std;

class CMyData
{
	int m_nData; //private

public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main()
{
	CMyData data;
	data.SetData(10);
	//����ڰ� ���� ������ �� �ִ�.
	//data.m_nData = 10; //���ȵ�
	//data.m_nData(10);  //���ȵ�

	cout << data.GetData() << endl;

	return 0;
}