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
	int getX() const;
	int getY() const;
	void printInfo();
	void printInfo() const;
private:
	int x;
	int y;
};
