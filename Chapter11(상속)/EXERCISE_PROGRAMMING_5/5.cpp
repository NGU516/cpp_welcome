#define _USE_MATH_DEFINES	// M_PI

#include <iostream>
#include <math.h>		// M_PI

using namespace std;

class Shape {
	int x, y;
	string color;
public:
	Shape(int xval = 0, int yval = 0, string c = "") :x{ xval }, y{ yval }, color{ c } {}

	// 접근자 및 설정자
	int getX() { return x; }
	int getY() { return y; }
	string getColor() { return color; }
	void setX(int xval) { x = xval; }
	void setY(int yval) { y = yval; }
	void setColor(string c) { color = c; }

	void getArea() {}
};
class Circle : public Shape {
	double radius;
public:
	Circle(int xval = 0, int yval = 0, string c = "", double r = 0.0)
		: Shape(xval, yval, c), radius{ r } {}

	// 접근자 및 설정자
	double getRadius() { return radius; }
	void setRadius(double r) { radius = r; }

	int getArea() {
		Shape::getArea();
		double area = M_PI * radius * radius;		// 원 면적
		return area;
	}
	void print() {
		cout << "원의 면적: " << getArea() << endl;
	}
};

int main() {
	Circle a(0, 0, "red", 20);
	a.print();

	return 0;
}

