#include <iostream>

using namespace std;

class CTest2
{
public:

	CTest2() : m_nData1(10), m_nData2(20) //Member Value Initialization 1, Reference Valuable Init*
	{
		cout << "Constructor Start" << endl;
	}

	~CTest2() //Destructor ----------|2
	{
		cout << "Destructor Start" << endl;
	}

	/// Members
	int m_nData1, m_nData2; //member valuable
	int m_nData3 = 0; ////Member Value Initialization 2, C11 styles
	
	void PrintData(void) // Member function define/indentiper
	{
		cout << "m_nData1 = " << m_nData1 << endl;
		cout << "m_nData2 = "<< m_nData2 << endl;
		cout << "m_nData3 = "<< m_nData3 << endl;
	}
};

int main()
{
	cout << "Main Start" << endl;
	
	CTest2 t; // Call CTest() Constructor ----------|
	t.PrintData();

	cout << "Main End" << endl;

	return 0;
}