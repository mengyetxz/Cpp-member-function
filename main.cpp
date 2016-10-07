#include<iostream>
using namespace std;
#include"Point.h"
#include"Line.h"

int main()
{
	Line L1(1, 2, 3, 4);
	L1.printInfo();

	Line L2(L1);
	L2.printInfo();

	return 0;
}