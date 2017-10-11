#include <iostream>
using namespace std;

// 템플릿 클래스
template <typename T>
class CMyData
{
private:
	T m_Data;

public:
	CMyData(T param) : m_Data(param) {}
	operator T() { return m_Data; } //변환 생성자, 맴버변수가 1개 일때

	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param; }
};

int main(void)
{
	CMyData<int> a(5); //cast 와 유사
	cout << a << endl; //변환생성자

	CMyData<double> b(5.5);
	cout << b << endl;

	CMyData<char *> c("Hello"); //문자열은 포인터를 반환
	cout << c << endl;

	return 0;
}