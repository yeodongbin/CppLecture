//////////////////////////////////////////////////////////////////////
// Date : 
// Title : Default parameter
//
// By Yeo, Dongbin
//////////////////////////////////////////////////////////////////////

#include <iostream>

class Point
{
private:	
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)	{  }
	
	void ShowPoisition() const
	{

	}

	Point operator+(const Point &ref)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};
//
//int main() 
//{
//	Point pos1(3, 4);
//	Point pos1(3, 4);
//	Point pos1(3, 4);
//
//	pos1.sh
//	return 0;
//}