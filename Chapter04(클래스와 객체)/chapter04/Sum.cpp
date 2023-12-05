#include "chapter04.h"

void Sum::init(int x, int y) {
	n1 = x;
	n2 = y;
}

void Sum::add() {
	cout << "첫 번째 정수 : " << n1 << endl;
	cout << "두 번째 정수 : " << n2 << endl;

	cout << "연산 결과 : " << n1 + n2 << endl;
}
