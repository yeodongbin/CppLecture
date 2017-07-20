#include <iostream>

using namespace std;

class CMyData
{
public:
	CMyData() {	cout << "CMyData start" << endl;}

	CMyData(const CMyData &rhs) // Copy Constructor Define / distinction
		//:m_nData(rhs.m_nData) // --
	{
		this->m_nData = rhs.m_nData; // --
		cout << "CMyData(const CMyData &rhs) start" << endl;
	}

	int GetData() const	{ return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

//

int main() {
	CMyData a;
	a.SetData(10);

	cout << "a: " << a.GetData() << endl;

	CMyData b(a);// Copy Constructor 

	cout << "b: " << b.GetData() << endl;
	
	return 0;
}