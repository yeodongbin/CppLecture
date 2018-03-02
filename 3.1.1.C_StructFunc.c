//제작자가 만든 구조체의 멤버, 구성을 알고있어 한다.
//구조체가 변경되면 모든 관련 코드의 수정이 불가피하다

#include <stdio.h>
//1
typedef struct USERDATA 
{
	int nAge;
	char szName[32];
	//3 function pointer 변수<- 함수를 넣을 수 없다.			
	void (*Print)(struct USERDATA *); 
}USERDATA;

//2 인터페이스 함수 (사용자에게 편하게 사용하도록 돕는다.)
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
	PrintData(&user); //구조체와 함수를 엮을 수는 없을까?

	//3 
	USERDATA user = {20, "dongbin", PrintData};
	user.Print(&user);

	//함수 포인터 예시
	//int (*fp) (int a, int b)
	//fp(10,20)

	return 0;
}

