
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

//매개변수로 사용되는 복사 생성자
class CTestData
{
private:
	int m_nData = 0; //초기화 

public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTEstData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData) // 복사생성자 //안전성 담보
	{
		cout << "CTEstData(const CTestData &)" << endl;
	}

	int GetData() { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//전역 함수
//void TestFunc(CTestData param) //CTestData 객체가 2개 생김
void TestFunc(CTestData& param) //CTestData 객체가 1개 생김
{
	cout << "Test Function "<< endl;
	param.SetData(20);
}


//이름 없는 임시객체 
class CTempData
{
private:
	int m_nData = 0; //초기화 
	char* m_pszName = nullptr;

public:
	CTempData(int nParam, char *pszName) : m_nData(nParam), m_pszName(pszName)
	{
		cout << "CTempData(int) : "<< m_pszName << endl;
	}

	CTempData(const CTempData &rhs) : m_nData(rhs.m_nData), m_pszName(rhs.m_pszName) // 복사생성자 //안전성 담보
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

//전역 함수2
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
//	////매개변수로 사용되는 복사 생성자
//	//cout << "****** begin ****** " << endl;
//	//CTestData c(11); //CTestData 객체가 2개 생김
//	//TestFunc(c);
//	//cout << "c: " << c.GetData() << endl;
//	//cout << "******  end  ****** " << endl;
//
//
//	//이름 없는 임시객체 
//	CTempData d(5, "b");
//	cout << "===== before =====" << endl;
//
//	//d = TempFunc(10); //이름없는 객체 생성 //Debug 상태에서
//	//TempFunc(10); //이름없는 객체 생성 //Debug 상태에서
//					// Release 에서는 생성되지 않음
//	CTempData &rData = TempFunc(10); // 이름없는 객체를 참조 변수로 
//									 // 이름없는 객체가 Main 함수가 끝 날때까지 존재
//
//	cout << "===== after =====" << endl;
//	cout << d.GetData()<< endl;
//
//	return 0;
//}