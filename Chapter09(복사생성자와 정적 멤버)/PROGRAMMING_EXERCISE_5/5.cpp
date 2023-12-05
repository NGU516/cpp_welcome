#include <iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
	static int count;	// 정적 멤버 변수 선언	
public:
	Box(double l = 2.0, double w = 2.0, double h = 2.0) : length{ l }, width{ w }, height{ h } {
		cout << "생성자 호출" << endl;
		count++;		// 생성자가 호출되면 +1
	}
	~Box() {
		cout << "소멸자 호출" << endl;
		count--;	// 소멸자가 호출되면 -1
	}
	double Volume() {
		return length * width * height;
	}
	static int getCount() { return count; }
};

int Box::count = 0;		// 정적 멤버 변수 초기화

int main() {
	Box a;
	Box b(3, 3, 3);

	cout << "전체 객체 수: " << Box::getCount() << endl;

	return 0;
}