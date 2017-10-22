#include "ex.StudentGrade.h"

void StudentGrade::writeFile()
{
	ofstream wFile("StudentGradeResult.txt");

	if (wFile.is_open())
	{
		wFile << idNum << " "
			<< name << " "
			<< kor << " "
			<< eng << " "
			<< math << " "
			<< total << " "
			<< avg << " "
			<< grade << endl;
	}
	else
	{
		cout << " Unable to open file" << endl;
	}

	wFile.close();
	return ;
}
int StudentGrade::readFile()
{
	int line = 0;

	ifstream rFile("StudentGrade.txt");

	if (rFile.is_open())
	{
		rFile.seekg(0, ios::beg);
		while (!rFile.eof())
		{
			line++;
			rFile >> idNum
				>> name
				>> kor
				>> eng
				>> math;

			cout << idNum << " "
				<< name << " "
				<< kor << " "
				<< eng << " "
				<< math << endl;
		}
	}
	else
	{
		cout << " Unable to open file" << endl;
	}

	rFile.close();
	return line;
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

