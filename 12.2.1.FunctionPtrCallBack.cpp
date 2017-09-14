#include <iostream>

using namespace std;

int CompareData(const void* pLeft, const void* pRight)
{
	return *(int*)pLeft - *(int*)pRight;
}
//
//int main()
//{
//	int aList[5] = { 30, 50,60,70,80 };
//
//	qsort(aList, 5, sizeof(int), CompareData);//Function Pointer = ÇÔ¼ö¸í
//
//	for (auto &n : aList)
//		cout << n << '\t';
//
//	cout << endl;
//
//	return 0;
//}