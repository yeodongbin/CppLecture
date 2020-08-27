#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

template <typename T>
T Add(T a, T b) { return a + b; }


template<> //만약 아래와 같다면 아래 내용을 사용 = template <typename T>
char* Add(char* pszLeft, char* pszRight) // 문자 더하기 
{
	int nLenLeft = strlen(pszLeft);
	int nLenRight = strlen(pszRight);
	char* pszResult = new char[nLenLeft + nLenRight + 1];
	
	//복사
	strcpy_s(pszResult, nLenLeft + 1, pszLeft);
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
