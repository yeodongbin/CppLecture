//class 클래스 이름
//{
//	접근제어지시자
//	멤버변수선언
//	멤버함수선언 및 정의
//};

#include <cstdio>
#include <iostream>	
using namespace std;

class USERDATA
{
public:
	//멤버변수
	int nAge;
	char szName[32];
	//멤버함수 선언 및 정의
	void Print(void)
	{
		printf("%d %s\n", nAge, szName);
	 	//cout << nAge << " " << szName << endl;
	}
};

int main(void)
{
	USERDATA user = { 10, "철수" }; //구조체처럼 사용 인스턴스 선언, 초기화 ??
	user.Print();
}