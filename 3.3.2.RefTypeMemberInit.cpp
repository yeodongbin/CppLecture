//�����ڴ� �ݵ�� ����� ���ÿ� �ʱ�ȭ

#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int &rParam) : m_nData(rParam) {}; 
	//CRefTest(int rParam) : m_nData(rParam) {}; 
	//�����ڷ� �����Ұ� -> �Լ� �Ҹ�� ������� ���� 
	int GetData(void) { return  m_nData; }

private:
	int &m_nData;//�ʱ�ȭ �ʼ�
};

int main()
{
	int a = 10;
	CRefTest t(a);//Ref Type

	cout << t.GetData() << endl;

	a = 20;
	cout << t.GetData() << endl;

	return 0;
}