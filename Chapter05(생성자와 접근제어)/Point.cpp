#include "Chapter05.h"

void Point::Point_init(int xval, int yval) {	// ������ �ܺ� ����
	x = xval;
	y = yval;
}

void Point::Print() {
	cout << "X : " << x << endl;
	cout << "Y : " << y << endl;
}