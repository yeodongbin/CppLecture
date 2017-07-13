#include <iostream>
using namespace std;

class CNode
{
	friend class CMyList;
private:
	char m_szName[32];
	CNode *pNext = nullptr;

public:
	explicit CNode(const char* pszName)
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}
};

class CMyList
{
public:

};
//
//int main() {
//
//}