#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() { cout << "CMyData()" << endl; };
	CMyData(int nParam) { cout << "CMyData(int)" << endl; };
	CMyData(double nParam) { cout << "CMyData(double)" << endl; };
};

class CMyDataEx : public CMyData
{
public:
	CMyDataEx() { cout << "CMyData()" << endl; };
	CMyDataEx(int nParam) : CMyData(nParam)
	{
		cout << "CMyData(int)" << endl;
	};
	CMyDataEx(double nParam) : CMyData()
	{
		cout << "CMyData(double)" << endl;
	};
};

int main()
{
	CMyDataEx a;
	cout << "************" << endl;
	CMyDataEx b(5);
	cout << "************" << endl;
	CMyDataEx c(3.3);

	return 0;
}