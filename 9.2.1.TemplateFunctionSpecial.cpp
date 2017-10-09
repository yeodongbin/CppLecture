#include <iostream>
#include <memory>
#include <string>

using namespace std;

template <typename T>
T Add(T a, T b) { return a + b; }


template<> //만약 아래와 같다면
char* Add(char* pszLeft, char* pszRight)
{
	int nLenLeft = strlen(pszLeft);
	int nLenRight = strlen(pszRight);
	char* pszResult = new char[nLenLeft + nLenRight + 1];
	
	//복사
	strcpy_s(pszResult, nLenLeft + 1, nLenRight);
	strcpy_s(pszResult+nLenLeft, nLenRight + 1, pszRight);
	
	return pszResult;
}

int main()
{
	int nResult = Add<int>(3, 4);

	cout << nResult << endl;
	char* pszResult = Add<char*>("Hello", "World");
	cout << pszResult << endl;
	delete[] pszResult;

	return 0;
}
