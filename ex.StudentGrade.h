#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class StudentGrade
{
public:
	int idNum = 0;
	char name[10] = { 0 };
	int kor = 0;
	int eng = 0;
	int math = 0;
	int total = 0;
	int avg = 0;
	char grade = 0;

public:
	void writeFile();
	int readFile();
};

class CheckFileSize
{
public:
	char fileName[30];

public:
	int getFileLine();
};
