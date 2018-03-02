#include "ex.StudentGrade.h"

void StudentInfo::writeFile(StudentGrade& _sg)
{
	ofstream wFile("StudentGradeResult.txt");

	if (wFile.is_open())
	{
		wFile << _sg.idNum << " "
			<< _sg.name << " "
			<< _sg.kor << " "
			<< _sg.eng << " "
			<< _sg.math << " "
			<< _sg.total << " "
			<< _sg.avg << " "
			<< _sg.grade << endl;
	}
	else
	{
		cout << " Unable to open file" << endl;
	}

	wFile.close();
	return ;
}
int StudentInfo::readFile(StudentGrade& _sg)
{
	int line = 0;

	ifstream rFile("StudentGrade.txt");

	if (rFile.is_open())
	{
		rFile.seekg(0, ios::beg);
		while (!rFile.eof())
		{
			line++;
			rFile >> _sg.idNum
				>> _sg.name
				>> _sg.kor
				>> _sg.eng
				>> _sg.math;

			cout << _sg.idNum << " "
				<< _sg.name << " "
				<< _sg.kor << " "
				<< _sg.eng << " "
				<< _sg.math << endl;
		}
	}
	else
	{
		cout << " Unable to open file" << endl;
	}

	rFile.close();
	return line;
}

int StudentGrade::AllocStudent(int _allocSize)
{
	pStudent = new STUINFO[_allocSize];
	memset(pStudent, 0, sizeof(STUINFO) * _allocSize);
	allocSize = _allocSize;
}

StudentGrade::~StudentGrade()
{
	if (pStudent != nullptr)
	{
		delete[] pStudent;
		pStudent = nullptr;
	}
}

int CheckFileSize::getFileLine()
{
	int line = 0;

	ifstream rFile("StudentGrade.txt");

	if (rFile.is_open())
	{
		rFile.seekg(0, ios::beg);
		while (!rFile.eof())
		{
			line++;
		}
	}
	else
	{
		cout << " Unable to open file" << endl;
	}

	rFile.close();
	return line;
}

