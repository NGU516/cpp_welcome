#include "Chapter05.h"

double Complex::getR() { return r; }
double Complex::getI() { return i; }
void Complex::setR(double rval) { r = rval; }
void Complex::setI(double ival) { i = ival; }

Complex Complex::add(Complex a, Complex b) { // 수정: add 함수를 Complex 타입으로 변경
	double c = a.getR() + b.getR();
	double d = a.getI() + b.getI();
	Complex result(c, d); // 결과를 Complex 객체로 생성
	return result;
}
