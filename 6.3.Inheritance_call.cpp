#include "standard.h"

class CMyDataA
{
public:
	CMyDataA()
	{
		cout << "CMyData A() "<< endl;
	}

	~CMyDataA() 
	{
		cout << "CMyData A() " << endl;
	}
};

class CMyDataB : public CMyDataA
{
public:
	CMyDataB() // ::CMyDataB()
	{
		cout << "CMyData  B() " << endl;
	}

	~CMyDataB()
	{
		cout << "CMyData  B() " << endl;
	}
};

class CMyDataC : public CMyDataB
{
public:
	CMyDataC()
	{
		cout << "CMyData   C() " << endl;
	}

	~CMyDataC()
	{
		cout << "CMyData   C() " << endl;
	}
};

//int main() {
//	CMyDataC();
//}