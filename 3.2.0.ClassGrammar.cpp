//class Ŭ���� �̸�
//{
//	��������������
//	�����������
//	����Լ����� �� ����
//};

#include <cstdio>
#include <iostream>	
using namespace std;

class USERDATA
{
public:
	//�������
	int nAge;
	char szName[32];
	//����Լ� ���� �� ����
	void Print(void)
	{
		printf("%d %s\n", nAge, szName);
	 	//cout << nAge << " " << szName << endl;
	}
};

int main(void)
{
	USERDATA user = { 10, "ö��" }; //����üó�� ��� �ν��Ͻ� ����, �ʱ�ȭ ??
	user.Print();
}