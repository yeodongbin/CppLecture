//#include <iostream>
//using namespace std;
//
//class CMyData
//{
//private:
//	int* m_pnData = nullptr; //예약어 C11
//
//public:
//	explicit CMyData(int nParam)
//	{
//		m_pnData = new int(nParam);
//	}
//
//	~CMyData() { delete m_pnData; };
//
//	operator int(void) { return *m_pnData; };//?
//
//
//	// = 대입연산자
//	void operator=(const CMyData &rhs) // 
//	{
//		if (this == &rhs)
//			return;
//
//		delete m_pnData; // 기존 것을 삭제
//		m_pnData = new int(*rhs.m_pnData); //새로운 동적할당
//		/*22 Line 동일
//		m_pnData = new int;
//		*m_pnData = *rhs.m_pnData;*/
//	}
//
//
//	//복합대입연산자 += , -=
//	CMyData& operator+=(const CMyData &rhs) // 
//	{
//		int* pnNewData = new int(*m_pnData);
//		*pnNewData += *rhs.m_pnData;
//
//		delete m_pnData; // 기존 것을 삭제
//		m_pnData = pnNewData; 
//
//		return *this;
//	}
//};
//
////
////int main() 
////{
////	CMyData a(0), b(5); 
////	a = b;
////	cout << a << endl; //자동형변환
////
////	CMyData c(0), d(5);
////	c += d;
////	cout << c << endl;
////	
////	return 0;
////}