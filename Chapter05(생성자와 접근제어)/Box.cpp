#include "Chapter05.h"

int Box::getLength() { return length; }
int Box::getWidth() { return width; }
int Box::getHeight() { return height; }
int Box::getVolume() { return length * width * height; }

bool Box::empty() {
	if (is_Box)
		return true;	// ����ִٸ� true
	else
		return false;
}

void Box::Print() {
	cout << name << endl;
	cout << "������ ����: " << length << endl;
	cout << "������ �ʺ�: " << width << endl;
	cout << "������ ����: " << height << endl;
	cout << "������ ����: " << getVolume() << endl;
	cout << endl;
}