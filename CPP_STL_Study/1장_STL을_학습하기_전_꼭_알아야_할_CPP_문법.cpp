#include "mainHeader.h"

class tmpPoint {
	int x;
	int y;

public:
	tmpPoint(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void print() const { cout << x << ", " << y << endl; }
	const tmpPoint operator+(const tmpPoint& arg) const
	{
		tmpPoint tmp;
		tmp.x = arg.x;
		tmp.y = arg.y;

		return tmp;
	}

};