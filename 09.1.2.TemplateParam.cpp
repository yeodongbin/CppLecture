#include <iostream>
using namespace std;

template <typename T, int nSize = 10> //템플릿 매개 변수를 2개 잡아도 된다.
class CMyArray
{
private:
	T* m_pData;

public:
	CMyArray() { m_pData = new T[nSize]; }
	~CMyArray() { delete[] m_pData; }

	//배열 연산자
	T& operator[](int nIndex)
	{
		if (nIndex < 0 || nIndex >= nSize)
		{
			cout << "ERROR: 배열의 경계를 벗어난 접근입니다." << endl;
			exit(1);
		}

		return m_pData[nIndex];
	}

	//상수화된 배열 연산자
	T& operator[](int nIndex) const { return operator[](nIndex); }

	//배열 요소의 개수를 반환
	int GetSize() { return nSize; }
};

int main()
{
	CMyArray<int, 3> arr; //매개변수 마냥 사용
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	for (int i = 0; i < 3; ++i)
		cout << arr[i] << endl;

	return 9;
}