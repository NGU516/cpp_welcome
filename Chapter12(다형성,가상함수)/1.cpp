#include <iostream>	
#define _USE_MATH_DEFINES // M_PI 사용
#include <math.h>	
using namespace std;

class Shape {
protected:
	int x, y;
public:
	Shape(int xval=0,int yval=0): x(xval), y(yval){}
	virtual ~Shape() { cout << "Shape 소멸자" << endl; }	// 가상 소멸자
	virtual double getArea() = 0;	// 순수 가상 함수 정의, 상속전용 Class
};

class Trinangle : public Shape {
public:
	Trinangle(int x, int y): Shape(x, y){}		// shape의 x,y를 밑변과 높이로 사용
	~Trinangle() { cout << "Triangle 소멸자" << endl; }
	double getArea() { return (x * y) / 2; }	// Triangle의 면적
};

class Rect : public Shape {
public:
	Rect(int x, int y) : Shape(x, y) {}		// shape의 x,y를 밑변과 높이로 사용
	~Rect() { cout << "Rect 소멸자" << endl; }
	double getArea() { return x*y; }	// Rect의 면적
};

class Circle : public Shape {
public:
	Circle(int x) : Shape(x) {}		// shape의 x를 반지름
	~Circle() { cout << "Circle 소멸자" << endl; }
	double getArea() { return M_PI*x*x; }	// Circle의 면적
};

int main() {
	Shape* arr[3];	// 도형 객체 포인터 배열

	arr[0] = new Rect(67, 41);
	arr[1] = new Circle(68.70);
	arr[2] = new Trinangle(58, 62);

	for (int i = 0; i < 3; i++) {
		// arr[i]는 객체 포인터 이기 때문에 .이 아닌 ->로 포인터가 가리키는 객체에 접근
		cout << "도형 #" << i << "의 면적: " << arr[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++) {	// 소멸자 호출은 자식->부모
		delete arr[i];
	}

	return 0;

}