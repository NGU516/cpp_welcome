#include <iostream>
using namespace std;

class Box {
	double length, width, height;	// ����,�ʺ�,����,����
public:
	Box(double l = 0, double w = 0, double h = 0) : length{ l }, width{ w }, height{ h } {}
	~Box() {}

	double getVolume(void) const{
		return length * width * height;
	}

	Box operator+(const Box& b);
	bool operator==(const Box& b) const {
		return (this->length == b.length) && (this->width == b.width) && (this->height == b.height);
	}
	bool operator<(const Box& b) const {
		return (this->getVolume() < b.getVolume());
	}
	void print() {
		cout << "������ ����: " << length << endl;
		cout << "������ �ʺ�: " << width << endl;
		cout << "������ ����: " << height << endl;
		cout << "������ ����: " << getVolume() << endl;
	}

	friend void printBox(Box box);

};

Box Box::operator+(const Box& b) {
	Box temp;
	temp.length = this->length + b.length;
	temp.height = this->height + b.height;
	temp.width = this->width + b.width;
	return temp;
}

void printBox(Box box) {
	cout << "Box(" << box.length << ',' << box.width << ',' << box.height << ") " << endl;
}

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
	Box c = a + b;

	cout << "����#1" << endl;
	a.print();
	cout << "����#2" << endl;
	b.print();
	cout << "����#3" << endl;
	c.print();

	cout << boolalpha << "����#1 == ����#2 : " << (a==b)<< endl;
	cout << boolalpha << "(����), ����#1 < ����#2 : " << (a < b) << endl;
	printBox(c);

	return 0;
}