#include <iostream>

using namespace std;

class CMyData
{
	//������ �������� (������)
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
	//��ȯ ������(Coversion constructor)
	//�Ű������� �ϳ��ΰ�
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

	CMyPoint(int x, int y) : CMyPoint(x) //������ �߰� ȣ�Ⱑ��
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
	//����Ʈ ������ ���� �� ����
	//CMyPoint() = default;
	//CMyPoint() = delete; // ���� ���� p135

private :
	int m_x = 0;
	int m_y = 0;
};

//CMyPoint::CMyPoint() {}; 
//// default ��ɾ �̿��Ͽ� �ܺ� ���Ǹ� ������ �� �ִ�.

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