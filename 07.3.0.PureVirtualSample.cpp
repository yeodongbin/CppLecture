//순수가상클래스는 순수가상함수를 멤보로 가진 클래스를 

#include <iostream>

using namespace std;

class CMyInterface  //순수가상클래스
{
public:
	CMyInterface()
	{
		cout << "CMyInterface()" << endl;
	}

	//순수 가상함수의 선언
	virtual int GetData() const = 0;
	virtual void SetData(int nParam) = 0;
};


class CMyData : CMyInterface
{
private:
	int m_nData;

public:
	CMyData() { cout << "CMyData" << endl; }

	//순수 가상함수의 정의 반드시
	virtual int GetData() const { return m_nData; }
	virtual void SetData(int nParam) { m_nData = nParam; }
};
//
//int main()
//{
//	//순수가상클래스는 인스턴스를 선언, 정의할 수 없다.
//	//CMyinterface a; 불가
//	CMyData a;
//	a.SetData(5);
//
//	cout << a.GetData() << endl;
//
//	return 0;
//}