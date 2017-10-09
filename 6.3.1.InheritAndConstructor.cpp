#include <iostream>
#include <string>
using namespace std;

class CMyDataA
{
public:
	CMyDataA()	{cout << "CMyData A() "<< endl;}
	~CMyDataA() {cout << "CMyData A() " << endl;}
};

class CMyDataB : public CMyDataA
{
public:
	CMyDataB()	{cout << "CMyData  B() " << endl;}
	~CMyDataB()	{cout << "CMyData  B() " << endl;}
};

class CMyDataC : public CMyDataB
{
public:
	CMyDataC()	{cout << "CMyData   C() " << endl;}
	~CMyDataC()	{cout << "CMyData   C() " << endl;}
};

int main() {
	cout << "** Begin **" << endl;
	CMyDataC data;
	cout << "**  End  **" << endl;

	return 0;
}