#include "chapter04.h"

void Triangle::area() {
	a = (b * h) / 2;
}

void Triangle::print() {
	cout << "�غ��� " << b << "�̰� " << "���̰� " << h << "��" << "�ﰢ���� ����: " << a << endl;
}