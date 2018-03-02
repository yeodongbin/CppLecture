#include "ex.StudentGrade.h"

void BubbleSort(CStudentInfo::INFO* _pStudent, int _size);
void SelectionSort(CStudentInfo::INFO* _pStudent, int _size);

int main(void)
{
	string fileName = "";

	StudentGrade stuGrade;
	StudentInfo stuInfo;

	
	
	
	return 0;

}

void BubbleSort(StudentInfo::INFO* _pStudent, int _size)
{
	for (int i = 0; i < _iSize - 1; ++i)
	{
		for (int j = 0; j < _iSize - i - 1; ++j)

			if (_pStudent[j].iTotal < _pStudent[j + 1].iTotal)
			{
				CStudentInfo::INFO tTemp = _pStudent[j];
				_pStudent[j] = _pStudent[j + 1];
				_pStudent[j + 1] = tTemp;
			}
	}
}

void SelectionSort(CStudentInfo::INFO* _pStudent, int _size)
{
	for (int i = 0; i < _size - 1; ++i)
	{
		int iMaxIndex = i;
		for (int j = i + 1; j < _size; ++j)
		{
			if (_pStudent[iMaxIndex].iTotal < _pStudent[j].iTotal)
				iMaxIndex = j;
		}

		CStudentInfo::INFO tTemp = _pStudent[i];
		_pStudent[i] = _pStudent[iMaxIndex];
		_pStudent[iMaxIndex] = tTemp;
	}
}