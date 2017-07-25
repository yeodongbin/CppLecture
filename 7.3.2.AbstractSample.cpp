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
//		cout << "���̸� �Է��ϼ���: ";
//		cin >> nAge;
//
//		//�Է� ������ �����ϴ°� ����
//		if (nAge < 8)
//			person = new CBaby;
//		else if (nAge < 14)
//			person = new CChild;
//		else if (nAge < 20)
//			person = new CTeen;
//		else
//			person = new CAdult;
//
//		person->CalcFare();//CPerson �����͸� �Ҵ���� // ����if, switch �� ��ü�Ѵ�(ȿ����)
//	}
//
//	for (auto &person : arList)
//	{
//		cout << person->GetFare() << "��" << endl;
//	}
//
//	//delete[] person?? 
//
//	return 0;
//}