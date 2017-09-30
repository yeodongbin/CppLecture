// ios <- istream , ostream <- iostream

//생성자 함수
//ifstream (const char* szName, 
//		  int nMode=ios::in,
//		  int nProt=filebuf::openprot);
//void ifsteam::close;
//
//ofstream(const char* szName,
//		int nMode = ios::out,
//		int nProt = filebuf::openprot);
//void ofsteam::close;
//
//fstream(const char* szName,
//		int nMode,
//		int nProt = filebuf::openprot);
//void fsteam::close;
//
//
////open 멤버함수
//ifstream::open(const char* szName,
//	int nMode = ios::in,
//	int nProt = filebuf::openprot);
//ofstream::open(const char* szName,
//	int nMode = ios::out,
//	int nProt = filebuf::openprot);
//fstream::open(const char* szName,
//	int nMode = ios::in,
//	int nProt = filebuf::openprot);
// 
// >> 추출연산자,  << 삽입연산자

#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char name[20];
	int age = 0;
	int temp;

	// **** 생성자 함수 이용 *************************
	// 파일 쓰기
	ofstream wFile("C:/test/test.txt");

	wFile << "dongbin " << 30 << std::endl;
	wFile << "yeodongbin " << 20 << std::endl;
	
	cin >> name >> age;
	wFile << name << " " << age << endl;

	wFile.close();

	//파일 읽기
	ifstream rFile("C:/test/test.txt"); 
	while (!rFile.eof())
	{
		rFile.getline(name, 100);
		cout << name << endl;
	}
	rFile.close(); //파일 읽기 닫기
	
	//**** open 함수 이용 *************************
	ofstream wFile; //Object 생성
	wFile.open("C:/test/test1.txt");
	wFile << "dongbin " << 30 << std::endl;
	wFile << "yeodongbin " << 20 << std::endl;
	cin >> name >> age;
	wFile << name << " " << age << endl;
	if (wFile.is_open() == true)
	{
		wFile.close();
	}

	ifstream rFile; //Object 생성
	rFile.open("C:/test/test1.txt");
	while (!rFile.eof()) {
		rFile.getline(name, 100);
		cout << name <<endl;
	}
	if (rFile.is_open() == true)
	{
		rFile.close();
	}

	return 0;
}