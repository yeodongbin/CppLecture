//�Լ� ��ü�� �Լ� ȣ�� �����ڸ� ���� ������ Ŭ������ ���ϴµ�
//�Լ� ȣ�� �����ڸ� ���� �Ű����� ���� ���� ���� �����ν� �Լ� ���÷�
//



#include <iostream>

using namespace std;

class Add
{
public:
	int operator()(int a, int b) //�Լ� ȣ�� �����ڸ� ���� ���� ()
	{
		cout << "int operator()(int , int )" << endl;
		return a + b;
	}

	double operator()(double a, double b) //�Լ� ȣ�� �������� �Ű������� �����Ѵ�.
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
//	//�Լ��� �Ű������� �ѱ��.
//	TestFunc(adder);
//
//	return 0;
//}