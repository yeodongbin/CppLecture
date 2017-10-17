
#include <iostream>
using namespace std;

class CMyException
{
private:
	int m_nErrorCode;
	char m_szMsg[128];
public:
	
	CMyException(int nCode, const char *pszMsg)
	{
		m_nErrorCode = nCode;
		strcpy_s(m_szMsg, sizeof(m_szMsg), pszMsg);
	}

	int GetErrorCode() const { return m_nErrorCode; }
	const char* GetMessage() const { return m_szMsg; }
};

int main(void)
{
	try
	{
		int nInput = 0;

		cout << "���� ������ �Է��ϼ���.: ";
		cin >> nInput;
		if (nInput < 0)
		{
			CMyException exp(10, "���� ������ �Է��ؾ� �մϴ�.");
			throw exp;
		}
	}
	catch (CMyException &exp)
	{
		cout << "ERROR CODE [" << exp.GetErrorCode() << "] " <<
			exp.GetMessage() << endl;
	}
	return 0;
}

