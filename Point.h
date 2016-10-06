class Point
{
public:
	Point();
	Point(int xx, int yy);
	Point(const Point &p0);
	~Point();
	void setX(int xx);
	void setY(int yy);
	int getX();
	int getY();
	void printInfo();
private:
	int x;
	int y;
};
