#pragma once

class Point
{
public:
	Point();
	Point(int x, int y);
	Point(const Point &);
	~Point();
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	void printInfo();
private:
	int x;
	int y;
};