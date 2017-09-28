#include <iostream>
using namespace std;

int nData(20);

namespace TEST_ID
{
	int nData = 0;

	void TestFunc(void)
	{
		cout << "TEST_ID : ";
		cout << nData << endl;
	}

	int nData = 0;
}

namespace problem
using namespace TEST_ID;

int main()
{
	int nData(10);

	cout << nData << endl;
	cout << "Enter interger number " << endl;
	cin >> nData;

	if (nData > 10)
	{//block 
		cout << nData << endl;
	}
	else
	{ 
		cout << "error" << endl;
	}

	TEST_ID::TestFunc();
	

	return 0;
}