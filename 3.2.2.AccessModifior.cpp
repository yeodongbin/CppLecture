
//접근제어 지시자
//private, protected, public
//별도로 언급하지 않으면 private
#include <iostream>

using namespace std;

class CMyData
{
	int m_nData; //private

public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main()
{
	CMyData data;
	data.SetData(10);
	//사용자가 값을 통제할 수 있다.
	//data.m_nData = 10; //허용안됨
	//data.m_nData(10);  //허용안됨

	cout << data.GetData() << endl;

	return 0;
}