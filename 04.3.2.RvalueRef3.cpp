//�ӽð�ü�� ��� ����
#include <iostream>
using namespace std;


//r-value �������İ� ȣ���� �ڵ尡 ����.
void TestFunc1(int nParam)
{
	cout << "TestFunc(int)" << endl;
}

void TestFunc2(int &rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

//r-value ��������
void TestFunc3(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}
int _tmain(void)
{
	//��ȣ�� ȣ���̴�. int���� int&&�� ��� �����ϴ�!
	TestFunc1(3 + 4);
	TestFunc2(3 + 4);
	TestFunc3(3 + 4);
	return 0;
}

