#include"Point.h"

class Line
{
public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	Line(const Line &L);
	~Line();
	void setLine(int x1, int y1, int x2, int y2);
	void printInfo();
private:
	Point pointA;
	Point pointB;
};
