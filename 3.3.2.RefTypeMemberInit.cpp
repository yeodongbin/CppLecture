//참조자는 반드시 선언과 동시에 초기화

#include <iostream>
using namespace std;

class CRefTest
{
public:
	CRefTest(int &rParam) : m_nData(rParam) {}; 
	//CRefTest(int rParam) : m_nData(rParam) {}; 
	//참조자로 정의할것 -> 함수 소멸시 사라짐을 방지 
	int GetData(void) { return  m_nData; }

private:
	int &m_nData;//초기화 필수
};

int main()
{
	int a = 10;
	CRefTest t(a);//Ref Type

	cout << t.GetData() << endl;

	a = 20;
	cout << t.GetData() << endl;

	return 0;
}