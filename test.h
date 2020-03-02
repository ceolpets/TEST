class Point
{
public:
	void setxy(int myx, int myy);
	void movexy(int x, int y);
protected:
	int X, Y;
};
class Circle :protected Point
{
public:
	void setr(int myx, int myy, int myr);
	void display();
	void movexy(int x, int y) { Point::movexy(x, y); }
protected:
	int R;
};
class Cylinder :public Circle
{
public:
	void seth(int myx, int myy, int myr, int myh) { setr(myx, myy, myr); H = myh; }
	void display();
protected:
	int H;
};