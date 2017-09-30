// ios <- istream , ostream <- iostream

//������ �Լ�
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
////open ����Լ�
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
// >> ���⿬����,  << ���Կ�����

#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
	char name[20];
	int age = 0;
	int temp;

	// **** ������ �Լ� �̿� *************************
	// ���� ����
	ofstream wFile("C:/test/test.txt");

	wFile << "dongbin " << 30 << std::endl;
	wFile << "yeodongbin " << 20 << std::endl;
	
	cin >> name >> age;
	wFile << name << " " << age << endl;

	wFile.close();

	//���� �б�
	ifstream rFile("C:/test/test.txt"); 
	while (!rFile.eof())
	{
		rFile.getline(name, 100);
		cout << name << endl;
	}
	rFile.close(); //���� �б� �ݱ�
	
	//**** open �Լ� �̿� *************************
	ofstream wFile; //Object ����
	wFile.open("C:/test/test1.txt");
	wFile << "dongbin " << 30 << std::endl;
	wFile << "yeodongbin " << 20 << std::endl;
	cin >> name >> age;
	wFile << name << " " << age << endl;
	if (wFile.is_open() == true)
	{
		wFile.close();
	}

	ifstream rFile; //Object ����
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