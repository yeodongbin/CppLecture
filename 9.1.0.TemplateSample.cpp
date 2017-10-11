#include <iostream>
using namespace std;

// ���ø� Ŭ����
template <typename T>
class CMyData
{
private:
	T m_Data;

public:
	CMyData(T param) : m_Data(param) {}
	operator T() { return m_Data; } //��ȯ ������, �ɹ������� 1�� �϶�

	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param; }
};

int main(void)
{
	CMyData<int> a(5); //cast �� ����
	cout << a << endl; //��ȯ������

	CMyData<double> b(5.5);
	cout << b << endl;

	CMyData<char *> c("Hello"); //���ڿ��� �����͸� ��ȯ
	cout << c << endl;

	return 0;
}