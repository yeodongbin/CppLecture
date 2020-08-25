#include "iostream"
using namespace std;

class CDeepCopy
{
private:
	int mNData = 0;
	int* pNData = NULL;

public:
	CDeepCopy(int intParam)
	{
		pNData = new int;
		*pNData = intParam;
	}

	CDeepCopy(CDeepCopy& rhs)
	{
		pNData = new int;
		*pNData = *rhs.pNData;
	}

	CDeepCopy& operator = (const CDeepCopy& rhs)
	{
		*pNData = rhs.mNData;
		return *this;
	}

	int GetData(bool isPtr = false) const
	{
		if (isPtr == true)
			return *pNData;
		else
			return mNData;
	}

	void SetData(int intParam)
	{
		mNData = intParam;
		*pNData = intParam;
	}

	~CDeepCopy()
	{
		delete pNData;
	}
};


int main()
{
	int *pA, *pB;

	pA = new int;
	*pA = 10;

	pB = new int;
	pB = pA; // Shallow copy

	cout << *pA << endl;
	cout << *pB << endl;

	delete pA;
	delete pB;// Shallow Copy Error

	return 0;
}