#include <iostream>
using namespace std;
// class를 friend 로 만들어 보자

class CNode
{
	//friend 클래스 선언
	friend class CMyList;

private:
	char m_szName[32];
	CNode *pNext = nullptr;

public:
	explicit CNode(const char* pszName) //explicit 정확한 형태(형변환 불가)
	{
		strcpy_s(m_szName, sizeof(m_szName), pszName);
	}
};

class CMyList
{
private:
	CNode m_HeadNode;

public:
	CMyList() : m_HeadNode("Dummy Head") {}
	~CMyList()
	{
		CNode* pNode = m_HeadNode.pNext;
		CNode* pDelete = nullptr;

		while (pNode)
		{
			pDelete = pNode;
			pNode = pNode->pNext;

			cout << pDelete->m_szName << endl;
			delete pDelete;
		}
		m_HeadNode.pNext = nullptr;
	}

	void AddNewNode(const char* pszName)
	{
		CNode* pNode = new CNode(pszName);

		//CNode 사용
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}
};


int main() 
{
	CMyList list;
	list.AddNewNode("길동");
	list.AddNewNode("철수");
	list.AddNewNode("영희");

	return 0;
}