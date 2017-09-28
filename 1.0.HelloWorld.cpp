//////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : print "hello world"
//
// By Yeo, Dongbin
/////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
	std::cout << " Hello World" << std::endl;

	//1
	int IntData = 20;
	std::cout << 10 << std::endl;
	std::cout << 10U << std::endl;
	std::cout << 10.5F << std::endl;
	std::cout << 10.5 << std::endl;
	std::cout << 3 + 4 << std::endl;
	std::cout << IntData << std::endl;

	////C Style
	printf("\n C Style \n");
	printf("%d\n",10);
	printf("%i\n", 10);
	printf("%0.2f\n", 10.5);
	printf("%d\n", 3+4);

	//String C++
	std::string strData = "Test string"; //constand - address 
	std::cout << "Sample String" << std::endl;
	std::cout << strData << std::endl;

	strData = " years   ";
	std::cout << strData << std::endl;
	std::cout << "I am " << 20 << strData << std::endl; // character constand - int	- string valuables

	//String C style
	char strValue[7]= "years "; // count the size of characters ??
	printf("I am %d %s\n", 20, strValue);

	//cin C style
	/*int nAge;
	char szJob[32];
	char szName[32];

	printf("Enter Your Age \n");
	scanf("%d", &nAge);

	printf("Enter Your Job \n");
	scanf("%s", szJob);

	printf("Enter Your Name \n");
	scanf("%s", szName);

	printf("%d %s %s \n", nAge, szJob, szName);*/

	/*
	int nAge;
	std::cout << "Enter Your Age" << std::endl;
	std::cin >> nAge;

	char szJob[32];
	std::cout << "Enter Your Job" << std::endl;
	std::cin >> szJob;

	std::string strName;
	std::cout << "Enter Your Name" << std::endl;
	std::cin >> strName;

	std::cout << nAge << " " << szJob << " " << strName	<<std::endl;*/


	return 0;
}