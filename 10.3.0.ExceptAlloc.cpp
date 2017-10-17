
#include <new>		//bad_alloc 클래스를 사용하기 위한 헤더
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
		cout << "정상적으로 객체가 소멸함" << endl;
	}
};

int main(void)
{
	//가능
	int *pInt;
	int nSize;
	
	printf("메모리 크기를 할당하시오 : ");
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
	
	// 불가능
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
		//bad_alloc class exception 클래스의 자식클래스
		//시스템이 밝힌 원인을 출력한다.
		cout << exp.what() << endl;
		cout << "ERROR: CTest()" << endl;
	}

	return 0;
}

