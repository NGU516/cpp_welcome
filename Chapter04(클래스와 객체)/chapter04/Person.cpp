#include "chapter04.h"

void Person::setPerson(string nameval, int ageval) {
	name = nameval;
	age = ageval;
}

void Person::print() {
	cout << "�̸� : " << name << endl;
	cout << "���� : " << age << endl;
}