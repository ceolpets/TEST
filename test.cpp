#include <iostream>
#include <string>
#include <stdio.h>
#include "test.h"
using namespace std;


void Point::setxy(int myx, int myy)
{
	X = myx;
	Y = myy;
}
void Point::movexy(int x, int y)
{
	X += x;
	Y += y;
}
void Circle::setr(int myx, int myy, int myr)
{
	setxy(myx, myy);
	R = myr;
}
void Circle::display()
{
	cout << "The position of center is ";
	cout << "(" << X << "," << Y << ")"<<endl;
	cout << "The radius of Circle is " << R << endl;
}
void Cylinder::display()
{
	cout << "The postion of center : ";
	cout << "(" << X << "," << Y << ")" << endl;
	cout << "The radius of Circle is " << R << endl;
	cout << "The height of Cylinder : " << H << endl;
}
int main()
{
	Cylinder d;
	d.seth(4, 5, 6, 8);
	cout << "The data of Cylinder : " << endl;
	d.display();
	d.movexy(7, 8);
	cout << "The new data of Cylinder is : " << endl;
	d.display();
	return 0;
}