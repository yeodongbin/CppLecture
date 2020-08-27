#include <iostream>
using namespace std;

template <typename T>
class CMyData
{
protected:
	T m_Data;
public:
};

template <typename T>
class CMyDataEx : public CMyData<T>
{
public:
	T GetData() const { return m_Data; }
	void SetData(T param) { m_Data = param;}
};

int main(void)
{
	CMyDataEx<int> a;
	a.SetData(5);
	cout << a.GetData() << endl;

	return 0;
}