//friend class 클래스 이름
//friend 함수원형선언

#include <iostream>
using namespace std;

class CMyData
{
private:
	int m_nData = 0;

public:
	CMyData(int nParam) : m_nData(nParam) {}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

	// friend keyword makes its function public type.
	friend void PrintData(const CMyData &);

};

void PrintData(const CMyData& rData)
{
	//friend함수 이므로 접근 제어 지시자의 영향을 받지 않고
	//private 에 접근가능
	cout << "PrintData() : " << rData.m_nData << endl;
}

int main()
{
	CMyData a(5);
	PrintData(a);

	return 0;
}


