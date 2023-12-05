#include "Chapter05.h"

void Airplane::getCapacity() { cout << "Capacity : " << capacity << endl; }
void Airplane::getName() { cout << "Name : " << name << endl; }
void Airplane::getSpeed() { cout << "Speed : " << speed << endl; }
void Airplane::setName(string n) { name = n; }
void Airplane::setCapacity(int c) { capacity = c; }
void Airplane::setSpeed(int s) { speed = s; }
void Airplane::Print() {
	getName();
	getCapacity();
	getSpeed();
}
