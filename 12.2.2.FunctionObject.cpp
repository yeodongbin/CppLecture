//함수 객체는 함수 호출 연산자를 다중 정의한 클래스를 말하는데
//함수 호출 연산자를 여러 매개변수 구조 다중 정의 함으로써 함수 템플렛
//



#include <iostream>

using namespace std;

class Add
{
public:
	int operator()(int a, int b) //함수 호출 연산자를 다중 정의 ()
	{
		cout << "int operator()(int , int )" << endl;
		return a + b;
	}

	double operator()(double a, double b) //함수 호출 연산자의 매개변수를 강제한다.
	{
		cout << "int operator()(double , double )" << endl;
		return a + b;
	}
};

//
void TestFunc(Add& add)
{
	cout << add(3, 4) << endl;

}
//
//int main()
//{
//	Add adder;
//
//	cout << adder(3, 4) << endl;
//	cout << adder(3.4, 4.4) << endl;
//
//	//함수를 매개변수로 넘긴다.
//	TestFunc(adder);
//
//	return 0;
//}