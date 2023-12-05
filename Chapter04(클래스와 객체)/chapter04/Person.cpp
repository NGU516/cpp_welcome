#include "chapter04.h"

void Person::setPerson(string nameval, int ageval) {
	name = nameval;
	age = ageval;
}

void Person::print() {
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}