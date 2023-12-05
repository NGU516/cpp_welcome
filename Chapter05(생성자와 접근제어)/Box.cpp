#include "Chapter05.h"

int Box::getLength() { return length; }
int Box::getWidth() { return width; }
int Box::getHeight() { return height; }
int Box::getVolume() { return length * width * height; }

bool Box::empty() {
	if (is_Box)
		return true;	// 비어있다면 true
	else
		return false;
}

void Box::Print() {
	cout << name << endl;
	cout << "상자의 길이: " << length << endl;
	cout << "상자의 너비: " << width << endl;
	cout << "상자의 높이: " << height << endl;
	cout << "상자의 부피: " << getVolume() << endl;
	cout << endl;
}