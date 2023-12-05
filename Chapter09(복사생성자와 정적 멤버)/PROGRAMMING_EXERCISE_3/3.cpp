#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass(const char* str);	// 생성자 선언,가리키는 char포인터가 상수
	MyClass(const MyClass& other);	// 복사 생성자 선언
	~MyClass();

	void print();
private:
	char* stored;
};

MyClass::MyClass(const char* str) {	// 생성자 정의
	cout << "생성자" << endl;
	stored = new char[strlen(str) + 1];		// str의 길이+1 = NULL까지 동적할당
	strcpy_s(stored, strlen(str)+1, str);	// strcpy_s(저장할 곳, 길이(버퍼 경계를 정해놓음), 복사대상)
}

MyClass::MyClass(const MyClass& other) {	// 복사 생성자 정의
	cout << "복사 생성자" << endl;
	stored = new char[strlen(other.stored) + 1];	// 원래 동적 할당된 곳에 저장된 것을 다른 곳에 동적 할당 해줌.
	strcpy_s(stored, strlen(other.stored) + 1, other.stored);
}

MyClass::~MyClass() {
delete[] stored;	// 동적 할당 된 자원 반납
}

void MyClass::print() {
	cout << "학급명 : " << stored << endl;
}

int main() {
	const char* str = "1반";

	MyClass class1(str);
	MyClass class2(class1);

	class1.print();
	class2.print();

	return 0;
}