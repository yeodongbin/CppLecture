#include <iostream>

using namespace std;

#define DEFAULT_FARE 1000

class CPerson
{
protected:
	unsigned int m_nFare = 0;

public:
	CPerson() {	}
	virtual ~CPerson() {
		cout << "virtual ~CPerson()" << endl;
	}

	virtual void CalcFare() = 0;

	virtual unsigned int GetFare() { return m_nFare; }
};

//0%
class CBaby :public CPerson
{
	virtual void CalcFare()
	{
		m_nFare = 0;
	}
};

//50%
class CChild :public CPerson
{
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE * (50 / 100);
	}
};

//75%
class CTeen :public CPerson
{
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE * (75 / 100);
	}
};

//100%
class CAdult :public CPerson
{
	virtual void CalcFare()
	{
		m_nFare = DEFAULT_FARE;
	}
};
//
//int main()
//{
//	CPerson* arList[3] = { 0 };
//	int nAge = 0;
//
//	for (auto &person : arList)
//	{
//		cout << "나이를 입력하세요: ";
//		cin >> nAge;
//
//		//입력 순간에 시작하는게 유리
//		if (nAge < 8)
//			person = new CBaby;
//		else if (nAge < 14)
//			person = new CChild;
//		else if (nAge < 20)
//			person = new CTeen;
//		else
//			person = new CAdult;
//
//		person->CalcFare();//CPerson 포인터를 할당받음 // 다중if, switch 를 대체한다(효율업)
//	}
//
//	for (auto &person : arList)
//	{
//		cout << person->GetFare() << "원" << endl;
//	}
//
//	//delete[] person?? 
//
//	return 0;
//}