#include <iostream>

using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int ExFuncPointer()
{
	int(*pf)(int, int) = sum;

	cout << "pf(int,int): " << pf(4, 5) << endl;
	cout << "sum(int,int): " << sum(4, 5) << endl;
	cout << "pf address = " << pf << endl;
	cout << "sum address = " << sum << endl;

	return 0;
}

class Rectangle
{
	int width;
	int height;
public:
	explicit Rectangle(int _width = 0, int _height = 0) : width(_width), height(_height) { }
	int area()
	{
		return width * height;
	}
};
//
//int main()
//{
//	Rectangle rc(10, 5);
//	int (Rectangle::*pf)(void) = &Rectangle::area;
//
//	cout << "rc.area(): " << rc.area() << endl;
//	cout << "(rc.*pf)(): " << (rc.*pf)() << endl;
//
//	return 0;
//}
//
