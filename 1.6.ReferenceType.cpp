//////////////////////////////////////////////////////////////////////
// Date : 2017-07-17
// Title : Reference Type , r-Value
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

//#include <iostream>
//
//int TestFunc(int nParam)
//{
//	int nResult = nParam * 2;
//	return nResult;
//}
//
//int main()
//{
//	int nData = 10;
//
//	int &ref = nData; //Reference Type definition
//	std::cout << "ref = " << ref << std::endl;
//
//	ref = 20;
//	std::cout << "ref = " << ref << std::endl;
//	std::cout << "nData = " << nData << std::endl;
//
//	int* pnData = &nData;
//	*pnData = 30;
//	std::cout << "*pnData = " << ref << std::endl;
//	std::cout << "ref = " << ref << std::endl;
//	std::cout << "nData = " << nData << std::endl;
//	// call by reference - address value coping
//
//	int &ref2 = nData;
//	std::cout << std::endl;
//	std::cout << "nData = " << nData << std::endl;
//	std::cout << "ref = " << ref << std::endl;
//	std::cout << "ref2 = " << ref2 << std::endl;
//	std::cout << std::endl;
//	///////////////////////////////////////////////////////////////
//
//	int nInput = 0;
//	int &&rData = nInput + 5;//r-value reference
//	std::cout << rData << std::endl;
//
//	rData = TestFunc(2);
//
//	rData += 20;
//	std::cout << rData << std::endl;
//
//	return 0;
//}

