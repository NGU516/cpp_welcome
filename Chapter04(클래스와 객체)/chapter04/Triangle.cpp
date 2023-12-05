#include "chapter04.h"

void Triangle::area() {
	a = (b * h) / 2;
}

void Triangle::print() {
	cout << "밑변이 " << b << "이고 " << "높이가 " << h << "인" << "삼각형의 면적: " << a << endl;
}