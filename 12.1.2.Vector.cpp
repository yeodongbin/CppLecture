#include <iostream>
#include <vector>
using namespace std;

//vector is implemented by template.
//
int main()
{
	vector<int> vec(3);
	vec[0] = 10;
	vec[1] = 20;
	vec[2] = 20;

	for (auto& n : vec)
		cout << n << '\t';

	cout << endl;

	//새로운 요소 뒤에 추가
	vec.push_back(30);
	vec.push_back(40);

	for (auto& n : vec)
		cout << n << '\t';
	cout << endl;

	return 0;
}
