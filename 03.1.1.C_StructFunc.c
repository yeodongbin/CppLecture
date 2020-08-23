//�����ڰ� ���� ����ü�� ���, ������ �˰��־� �Ѵ�.
//����ü�� ����Ǹ� ��� ���� �ڵ��� ������ �Ұ����ϴ�

#include <stdio.h>
//1
typedef struct USERDATA 
{
	int nAge;
	char szName[32];
	//3 function pointer ����<- �Լ��� ���� �� ����.			
	void (*Print)(struct USERDATA *); 
}USERDATA;

//2 �������̽� �Լ� (����ڿ��� ���ϰ� ����ϵ��� ���´�.)
void PrintData(USERDATA *pUser)
{
	printf("%d, %s\n", pUser->nAge, pUser->szName);
}

int main()
{
	////1
	USERDATA user = { 20, "dongbin"};
	printf("%d, %s\n", user.nAge, user.szName);
	//2
	PrintData(&user); //����ü�� �Լ��� ���� ���� ������?

	//3 
	USERDATA user = {20, "dongbin", PrintData};
	user.Print(&user);

	//�Լ� ������ ����
	//int (*fp) (int a, int b)
	//fp(10,20)

	return 0;
}

