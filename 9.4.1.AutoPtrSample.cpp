
#include <memory>
#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() { cout << "CMyData()" << endl; }
	~CMyData() { cout << "~CMyData()" << endl; }
	void TestFunc() { cout << "CMyData::TestFunc()" << endl; }
};

int main(void)
{
	auto_ptr<CMyData> ptrTest(new CMyData);
	auto_ptr<CMyData> ptrNew;

	cout << "0x" << ptrTest.get() << endl;

	//�����͸� �����ϸ� ���� �����ʹ� NULL�� �ȴ�.
	ptrNew = ptrTest;

	cout << "0x" << ptrTest.get() << endl;
	//���� �� �ڵ带 ������ �� ����.

	ptrTest->TestFunc();
	return 0;
}

//cout << "*****Begin*****" << endl;
//{
//	//���� �������� ����� ��� ��ü�� �ڵ����� �Ҹ��Ѵ�.
//	auto_ptr<CMyData> ptrTest(new CMyData[3]);
//}
//cout << "******End******" << endl;

