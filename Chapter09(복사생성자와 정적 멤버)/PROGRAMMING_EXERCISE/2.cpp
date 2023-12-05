#include <iostream>

using namespace std;

class Line {
	int* ptr;	// 선의 길이 저장
public:
	int getLength(void);
	Line(int len);
	Line(const Line& other);	// 복사 생성자
	~Line() { delete ptr; }
};

// 일반 생성자
Line::Line(int len) {
	cout << "일반 생성자" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "복사 생성자" << endl;
	this->ptr = new int;		// 동적할당으로 복사할 것을 저장할 공간 생성
	*(this->ptr) = *(other.ptr);		// 동적할당 된 공간에 복사할 객체 넣기
}

int Line::getLength() {
	return *ptr;
}



int main() {
	Line line1(10); // 일반 생성자 호출
	Line line2(line1); // 복사 생성자 호출, line1을 기반으로 line2를 생성
	Line line3(line2); // 복사 생성자 호출, line2를 기반으로 line3을 생성
	cout << "선의 길이: " << line2.getLength() << endl;
	cout << "복사 생성자" << endl;
	cout << "선의 길이: " << line3.getLength() << endl;
	

	return 0;
}