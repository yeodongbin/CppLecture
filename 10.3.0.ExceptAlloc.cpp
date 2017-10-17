
#include <new>		//bad_alloc Ŭ������ ����ϱ� ���� ���
#include <iostream>
using namespace std;

class CTest
{
private:
	char *m_pszData;
public:
	CTest(int nSize)
	{
		m_pszData = new char[nSize];
	}

	~CTest()
	{
		delete[] m_pszData;
		cout << "���������� ��ü�� �Ҹ���" << endl;
	}
};

int main(void)
{
	//����
	int *pInt;
	int nSize;
	
	printf("�޸� ũ�⸦ �Ҵ��Ͻÿ� : ");
	scanf("%d", &nSize);
	pInt = (int*)malloc(sizeof(int)*nSize);
	if (pInt == NULL)
	{
		printf("Fail to alloc memory!!\r\n");	
		exit(1);
	}

	*pInt = 4;
	printf("Value : %d\r\n", *pInt);
	free(pInt);
	
	// �Ұ���
	/*int nSize;
	cin >> nSize;
	int *pData = new int[nSize];

	if (pData == NULL)
	{
		cout << "Fail to alloc memory!!" << endl;
		exit(1);
	}*/
	
	try
	{
		int nSize;
		cout << "Input size: ";
		cin >> nSize;
		CTest a(nSize);
	}

	catch (bad_alloc &exp)
	{
		//bad_alloc class exception Ŭ������ �ڽ�Ŭ����
		//�ý����� ���� ������ ����Ѵ�.
		cout << exp.what() << endl;
		cout << "ERROR: CTest()" << endl;
	}

	return 0;
}

