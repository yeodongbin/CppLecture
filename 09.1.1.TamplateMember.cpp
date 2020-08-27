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
CTest<T>::CTest() //생성자
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
	CTest<double> a; //CTest 템플릿을 사용한다.
	cout << a.TestFunc() << endl;

	return 0;
}