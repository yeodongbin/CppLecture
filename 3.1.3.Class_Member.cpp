#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() //Constructor ----------|1
	{
		cout << "Constructor Start" << endl;
		m_nData = 10;
	}

	~CTest() //Destructor ----------|2
	{
		cout << "Destructor Start" << endl;
	}

	///// Members
	int m_nData; //member valuable

				 //void PrintData(void) // Member function define/indentiper
				 //{
				 //	cout << m_nData << endl;
				 //}

	void PrintData(void); // Member function define
};

void CTest::PrintData(void) // Member function indentiper
{
	cout << m_nData << endl;
}

//
//int main()
//{
//	cout << "Main Start" << endl;
//
//	CTest t; // Call CTest() Constructor ----------|
//	t.PrintData();
//
//	cout << "Main End" << endl;
//
//	return 0;
//}