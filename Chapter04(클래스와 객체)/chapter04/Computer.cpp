#include "chapter04.h"

void Computer::setComputer(string nameval, int RAMval, double cpu_speedval) {
	name = nameval;
	RAM = RAMval;
	cpu_speed = cpu_speedval;
}

void Computer::print() {
	cout << "�̸� : " << name << endl;
	cout << "RAM : " << RAM << endl;
	cout << "CPU �ӵ� : " << cpu_speed << endl;
}