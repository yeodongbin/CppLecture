#include <iostream>
#include <functional>
using namespace std;

//function<int[��ȯ����](char*, int)[�Ű����� ����]> param[�Լ������� ����]

void TestFunc(char* pszParam, std::function<int(char*, int)> param)
{
	cout << pszParam << endl;
	param("Hello", 10); //10 ������������ �Ѿ��
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
//	); //�ŰԺ��� �Ҵ�
//
//	cout << "*** End ***" << endl;
//
//	return 0;
//}	

// std::function ���� ����
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
//	f();  //< foo() ȣ��
//
//	f = bind(&goo, 5);  //std::bind goo�� ���ڸ� 5�� �����ؼ� f�� �ּҸ� ����
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