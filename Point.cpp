#include<iostream>
using namespace std;
#include"Point.h"

Point::Point():x(0), y(0)
{
	cout << "Point():x(0), y(0)" << endl;
}

Point::Point(int x, int y) :x(x), y(y)
{
	cout << "Point(int xx, int yy) :x(xx), y(yy)" << endl;
	//cout << "Point(int xx, int yy) :x(" << x << ")" << "," << "y(" << y << ")" << endl;
}

Point::Point(const Point &p):x(p.x), y(p.y)
{
	cout << "Point(const Point &p)" << endl;
}

Point::~Point()
{
	cout << "~Point()" << endl;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
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