#include <iostream>
using namespace std;

class Point{
private:
	double xval, yval;
public:
	Point(double x = 0.0, double y = 0.0) : xval{ x }, yval{ y } {};
	~Point() { cout << "소멸자 호출" << endl; }
	double getX() { return xval; }
	double getY() { return yval; }

	void print();
	void swap(Point& other);	// 객체의 멤버 변수 값 교환
};

void Point::print() {
	cout << "(" << xval << ", " << yval << ")" << endl;
}

void Point::swap(Point& other) {		// 객체 자신,other,temp(임시객체) 로 swap
    cout << "swap" << endl;

    Point Temp(xval, yval);		// 임시 객체에 객체 자신의 값 복사

    // other 객체의 멤버 변수 값을 현재 객체로 복사
    xval = other.xval;
    yval = other.yval;

    // 임시 변수의 값을 other 객체로 복사
    other.xval = Temp.xval;
    other.yval = Temp.yval;
}

int main() {
	Point a(1.2, -2.8);
	Point b(3.6);

	a.print();
	b.print();
	a.swap(b);	// a,b 교환
	a.print();
	b.print();

	return 0;
}
