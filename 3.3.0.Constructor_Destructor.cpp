//������ 
// ����, �Ҹ�� �ڵ� ������, Ŭ���ø�� ����, ��ȯ������ ����.
//������
// �Ҹ��ڿ��� ~ �ٴ´�.
// The constructor can make 2 more it.
// The destructor only can make 1 thing;

//����Ʈ ������, �Ҹ���

#include <iostream>
using namespace std;

class CTest
{
	int m_nData;

public:
	CTest()
	{
		cout << "CTest::CTest()" << endl;
	}

	//3 �����ڴ� �������� ����(������)
	CTest(int nParam) : m_nData(nParam)
	{
		cout << "CTest::CTest()" << endl;
	}

	~CTest()
	{
		cout << "~CTest::CTest()" << endl;
	}
};

//2
//CTest a; // C�� �޸� C++�� ���������� ���� ����

int main()
{
	cout << " Begin" << endl;
	CTest a; // First Call != C language
	cout << " End" << endl;

	return 0;
}//�Ҹ��ڴ� ����� ��� ������ ������ �ڵ� �Ҹ�
