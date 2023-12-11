#include <iostream>

using namespace std;

// EXERCISE 11(Rect 클래스, const 최대한 추가)
class Rect {
	int width;
	int height;
public:
	// 접근자
	int const get_width() { return width; }
	int const get_height() { return height; }
	int const getArea() { return (width * height); }	// 면적, const를 통해 멤버변수 변경 X
	int const getParameter() { return (width + height) * 2; }	// 둘레, const를 통해 멤버변수 변경 X
	// 설정자
	void set_width(const int w) { width = w; }	// 함수 내부에서 w 변경 X
	void set_height(const int h) { height = h; }	// 함수 내부에서 h 변경 X
	void print() { cout << "width : " << width << " height : " << height << endl; }

	// EXERCISE 15
	bool is_equal(Rect r1, Rect r2) {
		if ((r1.get_width() == r2.get_width()) && (r1.get_height() == r2.get_height()))
			return true;
		else
			return false;

	};
	// EXERCISE 16
	// 참조를 통해 실행되기 때문에 객체 복사를 시행하지 않아 빠르고 메모리 효율적임
	// 참조를 통해 실행되기 때문에 값을 변경할 수도 있지만 const지정을 해주어야 함.
	bool is_equal(Rect& r1, Rect& r2) { // const Rect& r1, const Rect& r2
		if ((r1.get_width() == r2.get_width()) && (r1.get_height() == r2.get_height()))
			return true;
		else
			return false;
	};

};

// PROGRAMMING_EXERCISE 5번
class Student {
	string name;
public:
	Student(string name = "") : name{ name } {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }	// 매개변수 name을 Student의 멤버 변수 값 저장
};

int main() {

	int* p = nullptr;
	int i;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> i;

	p = new int[i];	// i 크기의 동적 배열 생성

	for (int j = 0; j < i; j++) {	// 정수 입력
		int num;
		cout << "정수를 입력하시오 : ";
		cin >> num;

		p[j] = num;
	}

	cout << "입력된 정수는: ";
	for (int j = 0; j < i; j++) {	// 출력
		cout << p[j];
		if (!(j == i - 1))	// 마지막 숫자에는 , 출력 X
			cout << ",";
	}
	cout << endl;

	delete[] p;		// 동적 배열 메모리 반환

	return 0;
}
