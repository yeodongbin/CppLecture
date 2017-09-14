#include <iostream>
#include <functional>
using namespace std;

//function<int[반환형식](char*, int)[매개변수 형식]> param[함수포인터 역할]

void TestFunc(char* pszParam, std::function<int(char*, int)> param)
{
	cout << pszParam << endl;
	param("Hello", 10); //10 람다형식으로 넘어가죠
}
//
//int main()
//{
//	cout << "*** Begin ***" << endl;
//
//	TestFunc("TestFunc()",
//		[](char* pszParam, int nParam)->int //Lamd
//		{	
//			cout << pszParam << " : " << nParam << endl;
//			return 0;
//		}
//	); //매게변수 할당
//
//	cout << "*** End ***" << endl;
//
//	return 0;
//}	

// std::function 연습 문제
//void foo() { cout << "foo" << endl; }
//void goo(int a) { cout << "goo" << a << endl; }
//void hoo(int a, int b) { cout << "hoo" << a << b << endl; }
//
//class Dialog
//{
//public:
//	void Close() { cout << "Dialog Close" << endl; }
//};
//
//int main(int argc, char* argv[])
//{
//	function<void()> f = &foo;
//	f();  //< foo() 호출
//
//	f = bind(&goo, 5);  //std::bind goo의 인자를 5로 고정해서 f에 주소를 대입
//	f();
//
//	f = bind(&hoo, 1, 2);
//	f();  //< hoo(1,2)
//
//	Dialog dlg;
//	f = bind(&Dialog::Close, &dlg);
//	f();  //< dlg.Close();
//
//	return 0;
//}