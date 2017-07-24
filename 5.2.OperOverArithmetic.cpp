//#include <iostream>
//using namespace std;
//
//class CMyData
//{
//private:
//	int m_nData = 0;
//
//public:
//	// 변환 생성자
//	CMyData(int nParam) : m_nData(nParam)
//	{
//		cout << "CMyData(int)" << endl;
//	}
//
//	//복사 생성자
//	CMyData(const CMyData &rhs) : m_nData(rhs.m_nData)
//	{
//		cout << "CMyData(const CMyData &)" << endl;
//	}
//
//	//이동생성자
//	CMyData(const CMyData &&rhs) : m_nData(rhs.m_nData)
//	{
//		cout << "CMyData(const CMyData &&)" << endl;
//	}
//
//
//	//형변화
//	operator int() { return m_nData; };
//
//	//+
//	CMyData operator+(const CMyData &rhs)
//	{
//		cout << "operator+" << endl;
//		CMyData result(0);
//		result.m_nData = this->m_nData + rhs.m_nData;//산술 연산자 제어
//
//		return result;
//	}
//
//	//=
//	CMyData& operator=(const CMyData &rhs)
//	{
//		cout << "operator=" << endl;
//		m_nData = rhs.m_nData +1;
//
//		return *this;
//	}
//};
////
////int main()
////{
////	cout << "=======begin=========" << endl;
////	CMyData a(0), b(3), c(6);
////
////	a = b + c; 
////	//a= b.operator+(c) // 핵심은 가로
////	//a.operator=(b.operator+(c)
////	//a = 임시객체
////	cout << a << endl;
////	cout << "=======end  =========" << endl;
////
////	return 0;
////}