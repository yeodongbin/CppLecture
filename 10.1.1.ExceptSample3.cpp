#include <iostream>
using namespace std;

int main(void)
{
	int  a = 100, b;
	cout << "Input number : ";
	cin >> b;

	try
	{
		if (b == 0) //실수 많음
		{ 
			throw b; 
		} //return 같이
		else 
		{ 
			cout << a / b << endl; 
		}
	}

	catch (int nExp)
	{
		cout << "ERROR : "<< nExp << "으로 나눌 수 없다." << endl;
	}

	return 0;
}