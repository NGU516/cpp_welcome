#include "Chapter05.h"

double Complex::getR() { return r; }
double Complex::getI() { return i; }
void Complex::setR(double rval) { r = rval; }
void Complex::setI(double ival) { i = ival; }

Complex Complex::add(Complex a, Complex b) { // ����: add �Լ��� Complex Ÿ������ ����
	double c = a.getR() + b.getR();
	double d = a.getI() + b.getI();
	Complex result(c, d); // ����� Complex ��ü�� ����
	return result;
}
