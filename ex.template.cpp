#include "standard.h"
#include <iostream>

template <typename T>
T Add(T a, T b)
{
	return a + b;
}

template <>//template connection
char* Add(char* a, char* b)
{
	int nLenLeft = strlen(a);
	int nLenRight = strlen(b);
	char* pResult = new char[nLenLeft + nLenRight + 1];

	return pResult;
}

template <typename T>
class CMyData
{
private:
	T m_Data
public:
	CMyData(T param) : m_Data(param) {}

	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param; }
};

template <>
class CMyData<char*>
{
private:
	char* m_Data;
public:
	CMyData(char* pParam) 
	{
		int nLen = strlen(pParam);
		m_Data = new char[nLen + 1];
		strcpy(m_Data, pParam);
	}

	~CMyData()
	{
		delete[] m_Data;
	}

	char* GetData() const { return m_Data; }
};

//int main()
//{
//
//
//	return 0;
//}