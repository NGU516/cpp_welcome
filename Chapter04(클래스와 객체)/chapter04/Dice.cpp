#include "chapter04.h"

void Dice::roll() {
	int face = (int)(rand() % 6 + 1);
	
	cout << "�ֻ��� ��=" << face << endl;
}