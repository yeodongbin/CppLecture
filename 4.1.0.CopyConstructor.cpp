
#include <iostream>
using namespace std;

class CMyData
{
public:
	CMyData() {	cout << "CMyData start" << endl;}

	CMyData(const CMyData &rhs) // Copy Constructor Define / distinction
		//:m_nData(rhs.m_nData) // --
	{
		this->m_nData = rhs.m_nData; // --
		cout << "CMyData(const CMyData &rhs) start" << endl;
	}

	int GetData() const	{ return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

//�Ű������� ���Ǵ� ���� ������
class CTestData
{
private:
	int m_nData = 0; //�ʱ�ȭ 

public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTEstData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData) // ��������� //������ �㺸
	{
		cout << "CTEstData(const CTestData &)" << endl;
	}

	int GetData() { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//���� �Լ�
//void TestFunc(CTestData param) //CTestData ��ü�� 2�� ����
void TestFunc(CTestData& param) //CTestData ��ü�� 1�� ����
{
	cout << "Test Function "<< endl;
	param.SetData(20);
}


//�̸� ���� �ӽð�ü 
class CTempData
{
private:
	int m_nData = 0; //�ʱ�ȭ 
	char* m_pszName = nullptr;

public:
	CTempData(int nParam, char *pszName) : m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTempData(int) : "<< m_pszName << endl;
	}

	CTempData(const CTempData &rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) // ��������� //������ �㺸
	{
		cout << "CTempData(const CTestData &) : "<< m_pszName << endl;
	}

	~CTempData()
	{	
		cout << "~CTempData(int) : " << m_pszName << endl;
	}

	CTempData& operator = (const CTempData &rhs)
	{
		cout << "operator = " << endl;
		m_nData = rhs.m_nData;

		return *this; //this is pointer
	}

	int GetData() { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//���� �Լ�2
CTempData TempFunc(int nParam) 
{
	CTempData a(nParam, "a");
	return a;
}

//
//int main() {
//	//CMyData a;
//	//a.SetData(10);
//	//cout << "a: " << a.GetData() << endl;
//
//	//CMyData b(a);// Copy Constructor 
//	//cout << "b: " << b.GetData() << endl;
//
//
//	////�Ű������� ���Ǵ� ���� ������
//	//cout << "****** begin ****** " << endl;
//	//CTestData c(11); //CTestData ��ü�� 2�� ����
//	//TestFunc(c);
//	//cout << "c: " << c.GetData() << endl;
//	//cout << "******  end  ****** " << endl;
//
//
//	//�̸� ���� �ӽð�ü 
//	CTempData d(5, "b");
//	cout << "===== before =====" << endl;
//
//	//d = TempFunc(10); //�̸����� ��ü ���� //Debug ���¿���
//	//TempFunc(10); //�̸����� ��ü ���� //Debug ���¿���
//					// Release ������ �������� ����
//	CTempData &rData = TempFunc(10); // �̸����� ��ü�� ���� ������ 
//									 // �̸����� ��ü�� Main �Լ��� �� �������� ����
//
//	cout << "===== after =====" << endl;
//	cout << d.GetData()<< endl;
//
//	return 0;
//}