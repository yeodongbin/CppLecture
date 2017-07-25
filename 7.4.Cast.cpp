//const_cast<>
//static_cast< > !
//dynamic_cast< > !

//C++ Style
//reinterpret_cast<>
//int nData = 10;
//char* pszData = NULL;
//pszData = reinterpret_cast<char*> (&nData);

//C Style
//int a = 10;
// double b = (double)a;

#include <iostream>
using namespace std;

class CMyData
{
private: 
	int m_nData = 0;

public:
	CMyData() {	}
	virtual ~CMyData() {}
	void SetData(int nParam) { m_nData = nParam; }
	int GetData() { return m_nData; }
};

class CMyDataEx : public CMyData
{
private:
	int m_nNewData = 10;

public :
	void SetData(int nParam) //Override
	{ 
		if (nParam > 10)
			nParam = 10;

		CMyData::SetData(nParam);
	}

	void PrintData()
	{
		cout << " PrintData() : " << GetData() << endl;
		//cout << " New Data() : " << m_nNewData << endl; 
	}
};

//Dynamic Cast Class than
class CShape
{
public:
	CShape(){}
	virtual ~CShape() {}
	virtual void Draw() { cout << "CShape::Draw()" << endl; }
};

class CRectanle : public CShape
{
public:
	virtual void Draw() { cout << "CRectanle::Draw()" << endl; }

};

class CCircle : public CShape
{
public:
	virtual void Draw() { cout << "CCircle::Draw()" << endl; }

};
//Dynamic Cast Class End

//int main()
//{
//	//CMyData* pData = new CMyDataEx;
//	//CMyDataEx* pNewData = NULL;
//
//	//pData->SetData(15);
//
//	////static_cast = ��������ȭ
//	//pNewData = static_cast<CMyDataEx*>(pData); //����ȯ ������ �߻��� �� �ִ�.
//	//pNewData->PrintData();
//	//delete pData;
//
//
//	//Dynamic Cast
//	cout << "���� ��ȣ�� �Է��ϼ���. [1:�簢��, 2:��]" << endl;
//	int nInput = 0;
//	cin >> nInput;
//
//	CShape* pShape = nullptr;
//	if (nInput == 1)
//		pShape = new CRectanle;
//	else if (nInput == 2)
//		pShape = new CCircle;
//	else
//		pShape = new CShape;
//
//	pShape->Draw();
//
//	//���нÿ� NULL�� ��ȯ
//	CRectanle* pRect = dynamic_cast<CRectanle*>(pShape);
//	if (pRect != NULL) //<-- Check
//		cout << "CRectanle::Draw()" << endl;
//	else
//	{
//		CCircle* pCircle = dynamic_cast<CCircle*>(pShape);
//		if (pCircle != NULL)
//			cout << "CCircle::Draw()" << endl;
//		else
//			cout << "CShape::Draw()" << endl;
//	}
//
//	return 0;
//}