////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : Valuable Type, Dynamic allocation 
//
// By Yeo, Dongbin
////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
	int a = 30;
	int b(a); // Copy Constructor
	auto c(b);

	std::cout << c << std::endl;


	//Memory Dynamic Allocation
	int* pData = new int;
	int* pNewData = new int(10);

	*pData = 20;
	std::cout << *pData << std::endl;
	std::cout << *pNewData << std::endl;

	delete pData;
	delete pNewData;


	//MDA Array
	int* arr = new int[5];

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 100;

	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;

	delete[] arr; //new-delete


	//Memory Dynamic Allocation - C style
	int* pCData;

	// (void*) malloc ()
	pCData = (int*)malloc(sizeof(int));
	*pCData = 1;

	printf("\n *pCData = %d \n ", *pCData);
	free(pCData);

	return 0;
}
