#include <iostream>
using namespace std;

int main(void)
{
	int  a = 100, b;
	cout << "Input number : ";
	cin >> b;

	try
	{
		if (b == 0) //�Ǽ� ����
		{ 
			throw b; 
		} //return ����
		else 
		{ 
			cout << a / b << endl; 
		}
	}

	catch (int nExp)
	{
		cout << "ERROR : "<< nExp << "���� ���� �� ����." << endl;
	}

	return 0;
}