//집합관계 (
//Composition - 모이면 무조건 같이 죽고
//Aggregation - 모이지만 죽을 때는 따로


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

	//메인 이벤트 반복문
	void Run()
	{
		char szName[32];
		int nInput = 0;

		while ((nInput = PrintMenu()) > 0)
		{
			switch (nInput)
			{
			case 1: //Add
				cout << "이름: ";
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
	//list.AddNewNode("길동");
	//list.AddNewNode("철수");
	//list.AddNewNode("영희");
	
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