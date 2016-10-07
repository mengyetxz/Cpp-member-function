#include<iostream>
using namespace std;
#include"Point.h"
#include"Line.h"

int main()
{
	Line L1(1, 2, 3, 4);
	L1.printInfo();
	cout << endl;

	Line L2(L1);
	L2.printInfo();
	cout << endl;

	const Line L3(100, 200, 300, 400);
	L3.printInfo();
	cout << endl;

	return 0;
}
