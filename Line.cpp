#include<iostream>
using namespace std;
#include"Line.h"

Line::Line()
{
	cout << "Line()" << endl;
}

Line::Line(int x1, int y1, int x2, int y2) :pointA(x1, y1), pointB(x2, y2)
{
	cout << "Line(int x1, int y1, int x2, int y2) :pointA(x1, y1), pointB(x2, y2)" << endl;
	//cout << "Line(int x1, int y1, int x2, int y2) :pointA(" << x1 << "," << y1 << "), pointB(" << x2 << "," << y2 << ")" << endl;
}

Line::Line(const Line &L):pointA(L.pointA), pointB(L.pointB)
{
	cout << "Line(const Line &L)" << endl;
}

Line::~Line()
{
	cout << "~Line()" << endl;
}

void Line::setLine(int x1, int y1, int x2, int y2)
{
	pointA.setX(x1);
	pointA.setY(y1);
	pointB.setX(x2);
	pointB.setY(y2);
}

void Line::printInfo()
{
	pointA.printInfo();
	pointB.printInfo();
}