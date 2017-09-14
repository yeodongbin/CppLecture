//람다 캡처 복사, 참조
//복사 캡처        [nData](void)->void
//참조 캡처        [&nData](void)->void
//디폴트 복사 캡처  [=](void)->void
//디폴트 참조 캡처  [&](void)->void


#include <iostream>

using namespace std;

int main()
{
	int nData = 10;
	int nData2 = 20;

	cout << nData << endl;

	//TestFunc 형 타입 = std::function<void(void)>
	auto TestFunc = [nData](void)->void
	{
		cout << nData << endl;	//람다식 외부의 값을 사용한다.
								//람다식 내부에서는 값을 변경할 수 없다.
	};
	//auto TestFunc = [nData](void) // void 는 생략가능
	//auto TestFunc = [nData]()
	//auto TestFunc = [nData]

	TestFunc();

	cout << "-----------------------" << endl;

	//람다식 내부에서만 변경가능하다 mutable : 변할 수 있는
	auto TestFunc2 = [nData](void)mutable->void
	{
		cout << ++nData << endl;	//람다식 외부의 값을 사용한다.
	};

	TestFunc2();
	cout << nData << endl;

	cout << "-----------------------" << endl;

	// 2개를 설정 가능하다
	auto TestFunc3 = [nData, nData2](void)->void
	{
		cout << nData << "\t" << nData2 << endl;	//람다식 외부의 값을 사용한다.
	};

	TestFunc3();

	cout << "-----------------------" << endl;

	return 0;
}
