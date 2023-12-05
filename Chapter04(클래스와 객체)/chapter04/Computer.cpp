#include "chapter04.h"

void Computer::setComputer(string nameval, int RAMval, double cpu_speedval) {
	name = nameval;
	RAM = RAMval;
	cpu_speed = cpu_speedval;
}

void Computer::print() {
	cout << "이름 : " << name << endl;
	cout << "RAM : " << RAM << endl;
	cout << "CPU 속도 : " << cpu_speed << endl;
}