#include "chapter04.h"

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
}

void Sum::add() {
	cout << "ù ��° ���� : " << n1 << endl;
	cout << "�� ��° ���� : " << n2 << endl;

	cout << "���� ��� : " << n1 + n2 << endl;
}
