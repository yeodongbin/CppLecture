
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

	//포인터를 대입하면 원본 포인터는 NULL이 된다.
	ptrNew = ptrTest;

	cout << "0x" << ptrTest.get() << endl;
	//따라서 이 코드를 실행할 수 없다.

	ptrTest->TestFunc();
	return 0;
}

//cout << "*****Begin*****" << endl;
//{
//	//속한 스코프를 벗어나면 대상 객체는 자동으로 소멸한다.
//	auto_ptr<CMyData> ptrTest(new CMyData[3]);
//}
//cout << "******End******" << endl;

