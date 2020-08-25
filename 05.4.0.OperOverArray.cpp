#include <iostream>
using namespace std;

//������ �ڵ�
class CIntArray
{
public:
	CIntArray(int nSize)
	{
		//���� �� ������ŭ int�ڷḦ ���� �� �ִ� �޸𸮸� Ȯ���Ѵ�.
		m_pnData = new int[nSize];
		memset(m_pnData, 0, sizeof(int) * nSize);
	}

	~CIntArray() { delete m_pnData; }

	//����� ������ ����� �迭 �����
	int operator[] (int nIndex) const
	{
		cout << "operator[] const" << endl;
		return m_pnData[nIndex];
	}

	//�Ϲ����� �迭 ������
	int& operator[] (int nIndex)
	{
		cout << "operator[]" << endl;
		return m_pnData[nIndex];
	}
private:
	int *m_pnData;		//�迭 �޸�
	int m_nSize;		//�迭 ����� ����
};

//����� �ڵ�
void TestFunc(const CIntArray &arParam)
{
	cout << "TestFunc()" << endl;
	//����� �����̹Ƿ� 'operator[] (int nIndex) const'�� ȣ���Ѵ�.
	cout << arParam[3] << endl;
}

int main(void)
{
	CIntArray arr(5);
	for (int i = 0; i < 5; ++i)
		arr[i] = i * 10;

	TestFunc(arr);
	return 0;
}