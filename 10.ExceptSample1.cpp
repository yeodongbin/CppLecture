
#include "standard.h"

//////////////////////////////////////////////////////////////////////
//
// Memory Exception Operation
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

//#include <new>	
//class CTest
//{
//public:
//	CTest(int nSize)
//	{
//		m_pszData = new char[nSize];
//	}
//
//	~CTest()
//	{
//		delete[] m_pszData;
//		cout << "extinct object!" << endl;
//	}
//
//private:
//	char* m_pszData;
//};
//
//int main()
//{
//	try
//	{
//		int nSize;
//		cout << "Input Size : " ;
//		cin >> nSize;
//
//		CTest a(nSize);
//	}
//
//	catch (bad_alloc &exp)
//	{
//		cout << exp.what() << endl;
//		cout << "ERROR: CTest()" << endl;
//	}
//
//	return 0;
//}

//////////////////////////////////////////////////////////////////////
//
// Exception Class
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

class CMyException
{
public:
	CMyException(int nCode, const char* pszMsg)
	{
		m_nErrorcode = nCode;
		strcpy_s(m_szMsg, sizeof(m_szMsg), pszMsg);
	}

	int GetErrorCode() const { return m_nErrorcode; }
	const char* GetMessage()const { return m_szMsg; }

private:
	int m_nErrorcode;
	char m_szMsg[128];
};
//
//int main()
//{
//	try
//	{
//
//	}
//
//	catch
//	{
//
//	}
//}






//////////////////////////////////////////////////////////////////////
//
// Catch Exception Operation
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

//void ExceptTest1()
//{
//	int nInput;
//
//	cout << "1~10 " << endl;
//	cin >> nInput;
//
//	if (nInput < 1 || nInput > 10)
//		throw nInput;
//}
//
//void ExceptTest2()
//{
//	char ch;
//	cout << "Menu : [A]dd\t[D]elete\t[E]xit\n:";
//	cin >> ch;
//
//	if (ch != 'A' && ch != 'D' && ch != 'E')
//	{
//		throw ch;
//	}
//}
//
//int main()
//{
//	cout << "***** 	 Begin   *****" << endl;
//	try
//	{
//		ExceptTest1();
//		ExceptTest2();
//	}
//
//	catch (int nExp)
//	{
//		cout << "ERROR: " << nExp << "" << endl;
//	}
//
//	catch (char ch)
//	{
//		cout << "ERROR(ch): " << ch << "no manu" << endl;
//	}
//
//	cout << "*****	 End   *****" << endl;
//
//	return 0;
//}


//////////////////////////////////////////////////////////////////////
//
//
//
//
//////////////////////////////////////////////////////////////////////

//int main()
//{
//	int a = 100, b;
//	cout << "Input number : ";
//	cin >> b;
//
//	try
//	{
//		if (b == 0)
//		{
//			throw b;
//		}
//		else
//		{
//			cout << a / b << endl;
//		}
//	}
//
//	catch (int nExp)
//	{
//		cout << "ERROR: " << nExp << "" << endl;
//	}
//
//	return 0;
//}