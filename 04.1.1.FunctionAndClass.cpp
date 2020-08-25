//객체의 복사본 CTest a; CTest b(a);
//함수 형태로 호출 - 클래스가 매개변수
//				   반환형식으로 사용

#include <iostream>
using namespace std;

//매개변수로 사용되는 복사 생성자
class CTestData
{
private:
	int m_nData = 0; //초기화 

public:
	CTestData(int nParam) : m_nData(nParam) // 개체 복사본으로 ...
	{
		cout << "CTEstData(int)" << endl;
	}
	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)  // 복사생성자 // = delete; //복사생성자 삭제
	{
		cout << "CTEstData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; };
	void SetData(int nParam) { m_nData = nParam; };
};

//void TestFunc(CTestData& param) //CTestData 객체가 1개 생김
//void TestFunc(const CTestData& param) //
//매개변수가 CTestData 클래스 형식 -> 복사생성자 호출
void TestFunc(CTestData param) //CTestData 객체가 2개 생김
{
	cout << "Test Function " << endl;
	param.SetData(20);
}

int main() {
	//매개변수로 사용되는 복사 생성자
	cout << "****** begin ****** " << endl;

	CTestData c(11); 
	TestFunc(c); //CTestData 객체가 2개 생김
	cout << "c: " << c.GetData() << endl;

	cout << "******  end  ****** " << endl;

	return 0;
}