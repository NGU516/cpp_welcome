#include "Chapter05.h"

void Point::Point_init(int xval, int yval) {	// 생성자 외부 정의
	x = xval;
	y = yval;
}

void Point::Print() {
	cout << "X : " << x << endl;
	cout << "Y : " << y << endl;
}