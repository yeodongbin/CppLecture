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

	int get_data(bool isPtr = false) const
	{
		if (isPtr == true)
			return *pNData;
		else
			return mNData;
	}

	void set_data(int intParam)
	{
		mNData = intParam;
		*pNData = intParam;
	}

	~CDeepCopy()
	{
		delete pNData;
	}
};


class CShallowCopy
{
private:
	int mNData = 0;
	int* pNData = NULL;

public:
	int get_data(bool isPtr = false) const
	{
		if (isPtr == true)
			return *pNData;
		else
			return mNData;
	}

	void set_data(int intParam)
	{
		mNData = intParam;
		*pNData = intParam;
	}
};

void imp_shallowCopy()
{
	//Shallow Copy 
	int *pA, *pB;

	pA = new int;
	*pA = 10;

	pB = new int;
	pB = pA;

	cout << *pA << endl;
	cout << *pA << endl;

	delete pA;
	delete pB;
}

//void main()
//{
//	CShallowCopy a;
//	a.set_data(10);
//
//	CShallowCopy b(a); 	//automatcal copy constuctor generation
//	cout << b.get_data() << endl;
//}