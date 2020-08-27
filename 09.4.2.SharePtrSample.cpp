
//shared_ptr Ŭ������ ����ϱ� ����.
#include <memory>
#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunc() { cout << "TestFunc()" << endl; }
};

int main(void)
{
	cout << "*****Begin*****" << endl;
	shared_ptr<CTest> ptr1(new CTest);

	//�� ����� �� �����ͷ� �������Ѵ�.
	cout << "Counter: " << ptr1.use_count() << endl;

	{
		shared_ptr<CTest> ptr2(ptr1); //ptr2 = ptr1;
		//�� ����� �� �����ͷ� �������Ѵ�.
		cout << "Counter: " << ptr1.use_count() << endl;
		ptr2->TestFunc();
	}

	//�� �����Ͱ� �Ҹ������Ƿ� ������ ������ 1 �����Ѵ�.
	cout << "Counter: " << ptr1.use_count() << endl;
	ptr1->TestFunc();
	cout << "******End******" << endl;

	//�ᱹ ī���Ͱ� 0�̵Ǹ� ��� ��ü�� �Ҹ��Ų��.
	return 0;
}

