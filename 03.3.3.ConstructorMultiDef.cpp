#include <iostream>

using namespace std;

class CMyData
{
	//생성자 다중정의 (다형성)
public: 
	CMyData(int nParam) : m_nData(nParam) {}; // Constructor 1
	CMyData(int x, int y) : m_nData(x + y) {}; // Constructor 2

	int GetData(void) { return m_nData; };

private:
	int m_nData;
};

//2
class CMyPoint
{
	//변환 생성자(Coversion constructor)
	//매개변수가 하나인것
public:
	CMyPoint(int x) //: m_x(0) 
	{
		cout << "CMyPoint(int)" << endl;
		if (x > 100)
		{
			x = 100;
		}
		m_x = 100; //init possible
	}

	CMyPoint(int x, int y) : CMyPoint(x) //생성자 추가 호출가능
	{
		cout << "CMyPoint(int, int)" << endl;
		if (y > 200)
		{
			y = 200;
		}
		m_y = 200; //init possible
	}

	void Print()
	{
		cout << "X: " << m_x << endl;
		cout << "Y: " << m_y << endl;
	}
	//디폴트 생성자 선언 및 정의
	//CMyPoint() = default;
	//CMyPoint() = delete; // 삭제 가능 p135

private :
	int m_x = 0;
	int m_y = 0;
};

//CMyPoint::CMyPoint() {}; 
//// default 명령어를 이용하여 외부 정의를 제외할 수 있다.

int main()
{
	//1
	CMyData a(10);
	CMyData b(3, 4);

	cout << a.GetData() << endl;
	cout << b.GetData() << endl;

	//2
	CMyPoint pointBegin(110);
	pointBegin.Print();

	CMyPoint pointEnd(50, 250);
	pointEnd.Print();

	return 0;
}