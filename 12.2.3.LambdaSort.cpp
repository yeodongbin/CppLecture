#include <iostream>
#include <functional> //Lambda 사용
using namespace std;

class CTestData
{
private:
	int m_array[5];

public:
	CTestData() //초기화
	{
		m_array[0] = 30;
		m_array[1] = 10;
		m_array[2] = 40;
		m_array[3] = 50;
		m_array[4] = 20;
	}

	void Print()
	{
		for (auto& n : m_array)
		{
			cout << n << endl;
		}

		cout << endl;
	}

	void Sort(function<int(int, int)> cmp)
	{
		int nTmp;

		for (int i = 0; i < 4; ++i)
		{
			for (int j = i + 1; j < 5; ++j)
			{
				if (cmp(m_array[i], m_array[j]) < 0)
				{
					nTmp = m_array[i];
					m_array[i] = m_array[j];
					m_array[j] = nTmp;
				}
			}
		}
	}
};
//
//int main()
//{
//	CTestData data;
//	data.Sort([](int a, int b)->int {return a - b; });
//	data.Print();
//
//	data.Sort([](int a, int b)->int {return b - a; });
//	data.Print();
//
//	return 0;
//}