#include <iostream>
using namespace std;

//Virtual Inherit 가상 상속
class CMyObject
{
public:
	CMyObject() { cout << "CMyObject()" << endl; }
	virtual ~CMyObject() {}
};

class CMyImage //: virtual public CMyObject 가상상속
{
protected:
	int m_nHeight;
	int m_nWidth;

public:
	CMyImage(int nHeight, int nWidth) 
		: m_nHeight(nHeight), m_nWidth(nWidth)
	{
		cout << "CMyImage(int, int) " << endl;
	}

	int GetHeight() const { return m_nHeight; }
	int GetWidth() const { return m_nWidth; }
	int GetSize() const { return 0; }//동일 함수
};

class CMyShape //: virtual public CMyObject
{
protected:
	int m_nType;

public:
	CMyShape(int nType) : m_nType(nType)
	{
		cout << "CMyShape(int) " << endl;
	}

	int GetType() const { return m_nType; }
	int GetSize() const { return 1; }//동일 함수
};

//child
class CMyPicture : public CMyImage, public CMyShape
{
public:
	CMyPicture() : CMyImage(200, 120), CMyShape(1)
	{
		cout << "CMyPicture() " << endl;
	}
};


int main()
{
	//상반된 두개의 클래스를 다중 상속하는 것은 문제 없음.
	CMyPicture a;
	cout << "Height : " << a.GetHeight() << endl;
	cout << "Width : " << a.GetWidth() << endl;
	cout << "Type : " << a.GetType() << endl;

	//동일 함수 이름으로 모호성 발생
	//cout << "Size : " << a.GetSize() << endl;
	cout << "Size : " << a.CMyImage::GetSize() << endl;
	cout << "Size : " << a.CMyShape::GetSize() << endl;

	// 사용하지 말자 정신건강에 안 좋다

	return 0;
}