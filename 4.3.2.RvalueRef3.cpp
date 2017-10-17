//임시객체를 담는 변수
#include <iostream>
using namespace std;


//r-value 참조형식과 호출자 코드가 같다.
void TestFunc1(int nParam)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc2(int &rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

//r-value 참조형식
void TestFunc3(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}
int _tmain(void)
{
	//모호한 호출이다. int형과 int&&형 모두 가능하다!
	TestFunc1(3 + 4);
	TestFunc2(3 + 4);
	TestFunc3(3 + 4);
	return 0;
}

