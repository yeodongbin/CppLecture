


#include "standard.h"

void ExceptTest1()
{
	int nInput;

	cout << "1~10 " << endl;
	cin >> nInput;

	if (nInput < 1 || nInput > 10)
		throw nInput;
}

void ExceptTest2()
{
	char ch;
	cout << "Menu : [A]dd\t[D]elete\t[E]xit\n:";
	cin >> ch;

	if (ch != 'A' && ch != 'D' && ch != 'E')
	{
		throw ch;
	}
}

int main()
{
	cout << "***** 	 Begin   *****" << endl;
	try
	{
		ExceptTest1();
		ExceptTest2();
	}

	catch (int nExp)
	{
		cout << "ERROR: " << nExp << "" << endl;
	}

	catch (char ch)
	{
		cout << "ERROR(ch): " << ch << "no manu" << endl;
	}

	cout << "*****	 End   *****" << endl;

	return 0;
}



//int main()
//{
//	int a = 100, b;
//	cout << "Input number : ";
//	cin >> b;
//
//	try
//	{
//		if (b == 0)
//		{
//			throw b;
//		}
//		else
//		{
//			cout << a / b << endl;
//		}
//	}
//
//	catch (int nExp)
//	{
//		cout << "ERROR: " << nExp << "" << endl;
//	}
//
//	return 0;
//}