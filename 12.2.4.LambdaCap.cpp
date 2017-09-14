//���� ĸó ����, ����
//���� ĸó        [nData](void)->void
//���� ĸó        [&nData](void)->void
//����Ʈ ���� ĸó  [=](void)->void
//����Ʈ ���� ĸó  [&](void)->void


#include <iostream>

using namespace std;

int main()
{
	int nData = 10;
	int nData2 = 20;

	cout << nData << endl;

	//TestFunc �� Ÿ�� = std::function<void(void)>
	auto TestFunc = [nData](void)->void
	{
		cout << nData << endl;	//���ٽ� �ܺ��� ���� ����Ѵ�.
								//���ٽ� ���ο����� ���� ������ �� ����.
	};
	//auto TestFunc = [nData](void) // void �� ��������
	//auto TestFunc = [nData]()
	//auto TestFunc = [nData]

	TestFunc();

	cout << "-----------------------" << endl;

	//���ٽ� ���ο����� ���氡���ϴ� mutable : ���� �� �ִ�
	auto TestFunc2 = [nData](void)mutable->void
	{
		cout << ++nData << endl;	//���ٽ� �ܺ��� ���� ����Ѵ�.
	};

	TestFunc2();
	cout << nData << endl;

	cout << "-----------------------" << endl;

	// 2���� ���� �����ϴ�
	auto TestFunc3 = [nData, nData2](void)->void
	{
		cout << nData << "\t" << nData2 << endl;	//���ٽ� �ܺ��� ���� ����Ѵ�.
	};

	TestFunc3();

	cout << "-----------------------" << endl;

	return 0;
}
