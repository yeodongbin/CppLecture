//다중 상속이 유리한 예

#include <iostream>

using namespace std;

class CMyUSB
{
	virtual int GetUSBVersion() = 0; //가상함수 초기화
	virtual int GetTransferRate() = 0;
};

class CMySerial
{
public :
	virtual int GetSignal() = 0;
	virtual int GetRate() = 0;
};



class CMyDevice : public CMyUSB, public CMySerial
{
public:
	virtual int GetUSBVersion() { return 0; } //가상함수 정의
	virtual int GetTransferRate() { return 0; }

	virtual int GetSignal() { return 0; }
	virtual int GetRate() { return 0; }
};/*

int main()
{
	CMyDevice dev;
	return 0;
}*/
