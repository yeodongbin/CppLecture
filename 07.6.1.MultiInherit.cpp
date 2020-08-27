#include <iostream>
using namespace std;

//Virtual Inherit ���� ���
class CMyObject
{
public:
	CMyObject() { cout << "CMyObject()" << endl; }
	virtual ~CMyObject() {}
};

class CMyImage //: virtual public CMyObject ������
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
	int GetSize() const { return 0; }//���� �Լ�
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
	int GetSize() const { return 1; }//���� �Լ�
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
	//��ݵ� �ΰ��� Ŭ������ ���� ����ϴ� ���� ���� ����.
	CMyPicture a;
	cout << "Height : " << a.GetHeight() << endl;
	cout << "Width : " << a.GetWidth() << endl;
	cout << "Type : " << a.GetType() << endl;

	//���� �Լ� �̸����� ��ȣ�� �߻�
	//cout << "Size : " << a.GetSize() << endl;
	cout << "Size : " << a.CMyImage::GetSize() << endl;
	cout << "Size : " << a.CMyShape::GetSize() << endl;

	// ������� ���� ���Űǰ��� �� ����

	return 0;
}