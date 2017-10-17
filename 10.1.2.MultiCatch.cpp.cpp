
#include <iostream>
using namespace std;

void ExceptTest1()
{
	int nInput;
	cout << "1~10 ���� ������ �Է��ϼ���.: ";
	cin >> nInput;
	//������ ��� ���ڸ� ���ܸ� ������.
	if (nInput < 1 || nInput > 10)
		throw nInput;
}

void ExceptTest2()
{
	char ch;
	cout << "Menu: [A]dd\t[D]elete\t[E]xit\n:";
	cin >> ch;
	//���� �޴��� �����ϸ� ���ܸ� ������.
	if (ch != 'A' && ch != 'D' && ch != 'E')
		throw ch;
}

int main(void)
{
	cout << "*****Begin*****" << endl;
	try
	{
		//�������� �帧�� �� ��� �ȿ� ��� ���δ�.
		ExceptTest1();
		ExceptTest2();
	}
	//���ܻ�Ȳ�� ������ �з��ϰ� ��Ȳ�� ���� �����ؼ� �� �� �ִ�.
	catch (int nExp)
	{
		cout << "ERROR:" << 
			nExp << "��(��) ������ ��� ���� �Դϴ�." << endl;
	}
	catch (char ch)
	{
		cout << "ERROR:" 
			<< ch << "�� �� ���� �޴��Դϴ�." << endl;
	}

	cout << "******End******" << endl;
	return 0;
}

