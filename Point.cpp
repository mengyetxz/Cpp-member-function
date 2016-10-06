#include<iostream>
using namespace std;
#include"Point.h"

Point::Point():x(0), y(0)
{
	cout << "Point():x(0), y(0)" << endl;
}

Point::Point(int xx, int yy) :x(xx), y(yy)
{
	cout << "Point(int xx, int yy) :x(xx), y(yy)" << endl;
	//cout << "Point(int xx, int yy) :x(" << x << ")" << "," << "y(" << y << ")" << endl;
}

Point::Point(const Point &p0)
{
	cout << "Point(const Point &p0)" << endl;
}

Point::~Point()
{
	cout << "~Point()" << endl;
}

void Point::setX(int xx)
{
	x = xx;
}

void Point::setY(int yy)
{
	y = yy;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

void Point::printInfo()
{
	cout << "(" << getX() << "," << getY() << ")" << endl;
}
