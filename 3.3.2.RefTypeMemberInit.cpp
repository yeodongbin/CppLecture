//참조자는 반드시 선언과 동시에 초기화

#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int &rParam) : m_nData(rParam) {};
	int GetData(void) { return  m_nData; }

private:
	int &m_nData;
};
//
//int main()
//{
//	int a = 10;
//	CRefTest t(a);//Ref Type
//
//	cout << t.GetData() << endl;
//
//	a = 20;
//	cout << t.GetData() << endl;
//
//	return 0;
//}