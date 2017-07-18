#include <stdio.h>

typedef struct USERDATA 
{
	int nAge;
	char szName[32];
	void(*Print)(struct USERDATA *); //function pointer
									 //USERDATA parameter
}USERDATA;

void PrintData(USERDATA *pUSER)
{
	printf("%d, %s\n", pUSER->nAge, pUSER->szName);
}
//
//int main()
//{
//	USERDATA user = {20, "dongbin", PrintData};
//	user.Print(&user);
//
//	return 0;
//}

