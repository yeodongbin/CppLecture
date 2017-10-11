#include <iostream>
using namespace std;
// class�� friend �� ����� ����

class CNode
{
	//friend Ŭ���� ����
	friend class CMyList;

private:
	char m_szName[32];
	CNode *pNext = nullptr;

public:
	explicit CNode(const char* pszName) //explicit ��Ȯ�� ����(����ȯ �Ұ�)
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

		//CNode ���
		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}
};


int main() 
{
	CMyList list;
	list.AddNewNode("�浿");
	list.AddNewNode("ö��");
	list.AddNewNode("����");

	return 0;
}