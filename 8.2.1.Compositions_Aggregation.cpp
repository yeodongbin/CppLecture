//���հ��� (
//Composition - ���̸� ������ ���� �װ�
//Aggregation - �������� ���� ���� ����


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
	~CMyList() {
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

		pNode->pNext = m_HeadNode.pNext;
		m_HeadNode.pNext = pNode;
	}

	void Print()
	{
		CNode* pNode = m_HeadNode.pNext;
		while (pNode)
		{
			cout << pNode->m_szName << endl;
			pNode = pNode->pNext;
		}
	}
};

//UI class
class CMyUI
{
private:
	CMyList m_list;

public:
	CMyUI(CMyList& rList) : m_list(rList){} //Aggregation

	int PrintMenu()
	{
		system("cls");
		cout << "[1] ADD\t" << "[2] PRINT\t" << "[0] EXIT\n:";
		cout.flush();
		int nInput = 0;
		cin >> nInput;

		return nInput;

	}

	//���� �̺�Ʈ �ݺ���
	void Run()
	{
		char szName[32];
		int nInput = 0;

		while ((nInput = PrintMenu()) > 0)
		{
			switch (nInput)
			{
			case 1: //Add
				cout << "�̸�: ";
				cout.flush();
				cin >> szName;
				m_list.AddNewNode(szName);
				break;

			case 2: //Print
				m_list.Print();
				break;
			default:
				break;
			}
		}
	}
};


int main() {
	//CMyList list;
	//list.AddNewNode("�浿");
	//list.AddNewNode("ö��");
	//list.AddNewNode("����");
	
	//Composition
	/*CMyUI ui;
	ui.Run();
*/
	//Aggregation
	CMyList list;
	CMyUI ui(list);
	ui.Run();

	return 0;
}