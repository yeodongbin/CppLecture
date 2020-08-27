#include <iostream>
using namespace std;

template <typename T> //template <class T>
class CTest
{
protected:
	static T m_Data;

public:
	CTest();
	T TestFunc();
};

template <typename T>
CTest<T>::CTest() //������
{}

template <typename T>
T CTest<T>::TestFunc()
{
	return m_Data;
}

template <typename T>
T CTest<T>::m_Data = 15;

int main(void)
{
	CTest<double> a; //CTest ���ø��� ����Ѵ�.
	cout << a.TestFunc() << endl;

	return 0;
}