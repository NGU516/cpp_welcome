#include <iostream>	
#define _USE_MATH_DEFINES // M_PI ���
#include <math.h>	
using namespace std;

class Shape {
protected:
	int x, y;
public:
	Shape(int xval=0,int yval=0): x(xval), y(yval){}
	virtual ~Shape() { cout << "Shape �Ҹ���" << endl; }	// ���� �Ҹ���
	virtual double getArea() = 0;	// ���� ���� �Լ� ����, ������� Class
};

class Trinangle : public Shape {
public:
	Trinangle(int x, int y): Shape(x, y){}		// shape�� x,y�� �غ��� ���̷� ���
	~Trinangle() { cout << "Triangle �Ҹ���" << endl; }
	double getArea() { return (x * y) / 2; }	// Triangle�� ����
};

class Rect : public Shape {
public:
	Rect(int x, int y) : Shape(x, y) {}		// shape�� x,y�� �غ��� ���̷� ���
	~Rect() { cout << "Rect �Ҹ���" << endl; }
	double getArea() { return x*y; }	// Rect�� ����
};

class Circle : public Shape {
public:
	Circle(int x) : Shape(x) {}		// shape�� x�� ������
	~Circle() { cout << "Circle �Ҹ���" << endl; }
	double getArea() { return M_PI*x*x; }	// Circle�� ����
};

int main() {
	Shape* arr[3];	// ���� ��ü ������ �迭

	arr[0] = new Rect(67, 41);
	arr[1] = new Circle(68.70);
	arr[2] = new Trinangle(58, 62);

	for (int i = 0; i < 3; i++) {
		// arr[i]�� ��ü ������ �̱� ������ .�� �ƴ� ->�� �����Ͱ� ����Ű�� ��ü�� ����
		cout << "���� #" << i << "�� ����: " << arr[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++) {	// �Ҹ��� ȣ���� �ڽ�->�θ�
		delete arr[i];
	}

	return 0;

}