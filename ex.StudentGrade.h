#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class StudentGrade
{
public:
	typedef struct 
	{
		int idNum = 0;
		char name[10] = { 0 };
		int kor = 0;
		int eng = 0;
		int math = 0;
		int total = 0;
		int avg = 0;
		char grade = 0;
	}STUINFO;

	STUINFO* pStudent = nullptr;
	int allocSize = 0;

public:
	StudentGrade(void) {}
	~StudentGrade(void) {}

	int AllocStudent(int);
	void printGrade();
};

class StudentInfo : public StudentGrade
{
public:
	void writeFile(StudentGrade &);
	int readFile(StudentGrade &);
};


class CheckFileSize
{
public:
	char fileName[30];

public:
	int getFileLine();
};
