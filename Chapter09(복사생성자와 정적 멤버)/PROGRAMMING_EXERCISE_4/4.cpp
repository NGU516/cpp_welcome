#include <iostream>
using namespace std;

class Point{
private:
	double xval, yval;
public:
	Point(double x = 0.0, double y = 0.0) : xval{ x }, yval{ y } {};
	~Point() { cout << "�Ҹ��� ȣ��" << endl; }
	double getX() { return xval; }
	double getY() { return yval; }

	void print();
	void swap(Point& other);	// ��ü�� ��� ���� �� ��ȯ
};

void Point::print() {
	cout << "(" << xval << ", " << yval << ")" << endl;
}

void Point::swap(Point& other) {		// ��ü �ڽ�,other,temp(�ӽð�ü) �� swap
    cout << "swap" << endl;

    Point Temp(xval, yval);		// �ӽ� ��ü�� ��ü �ڽ��� �� ����

    // other ��ü�� ��� ���� ���� ���� ��ü�� ����
    xval = other.xval;
    yval = other.yval;

    // �ӽ� ������ ���� other ��ü�� ����
    other.xval = Temp.xval;
    other.yval = Temp.yval;
}

int main() {
	Point a(1.2, -2.8);
	Point b(3.6);

	a.print();
	b.print();
	a.swap(b);	// a,b ��ȯ
	a.print();
	b.print();

	return 0;
}
