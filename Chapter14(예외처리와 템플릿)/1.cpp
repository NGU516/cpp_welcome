#include <iostream>
using namespace std;

int main() {
	int age = 0;
	
	try {	// 예외처리 구문
		cout << "나이를 입력하시오: ";
		cin >> age;
		
		if (age < 0)
			throw age;	// catch 로 age를 보내고, 예외처리를 진행
		cout << age << "살" << endl;
	}
	catch (int e) {		// 예외처리한 부분에 대해 오류메시지 출력
		cout << "오류: 양수를 입력하여야 함" << endl;
	}

	return 0;
}