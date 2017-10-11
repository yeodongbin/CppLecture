#include <iostream>

using namespace std;

class CTestData
{
private:
	int m_nData;

public :
	//explicit CTestData(int nParam) : m_nData(nParam) // 변환 생성자를 정확히 쓰라고 강제
													   // TestFunc (CTestData(5));	
	CTestData(int nParam) : m_nData(nParam) // 변환 생성자
	{
		cout << "CTestData(int nParam)"<<endl;
	}

	//변환 생성자가 있을 경우 CTestData <-> int(void) 형변환이 가능해짐
	operator int(void) { return m_nData; } //형변환 연산자

	CTestData(const CTestData& rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData & )" << endl;
	}

	int GetData() const { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//void TestFunc(const CTestData& param)
void TestFunc(CTestData param)
{
	cout << "Test Function () : " << param.GetData()<< endl; 
}

int main()
{
	TestFunc(5); // =TestFunc(CTestData(5));

	CTestData a(10);

	cout<< a.GetData() << endl;
	cout<< a << endl;
	cout<< (int) a << endl;
	cout<< static_cast<int>(a) << endl;

	return 0;
}