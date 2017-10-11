// virtual 반환형 맨버함수명
// 일반 매서드는 참조 형식을 따르고, 가상함수는 실 형식을 따른다.

#include <iostream>
using namespace std;

class CMyData
{
protected:
	int m_nData = 10;

public:
	virtual void PrintData() //final // 재정의 막기 //가상함수 선언, 정의 - 참조 형식
	{
		cout << " CMyData: = " << m_nData << endl;
	}
	void TestFunc()
	{
		cout << " void TestFunc()" << endl;
		PrintData();
		cout << "*******************" << endl;
	}
	int GetData(){return m_nData;}
	void SetData(int nParam){m_nData = nParam;}
};

class CMyDataEx : public CMyData 
{
public:
	virtual void PrintData() //실형식
	{
		cout << " CMyDataEx: = " << m_nData * 2 << endl;
	}
};

int main()
{
	CMyDataEx a;
	a.PrintData();

	CMyData& b = a; //b 참조 형식, a 실형식 호출
	b.PrintData();

	a.TestFunc();

	return 0;
}