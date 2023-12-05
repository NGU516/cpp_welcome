#include <iostream>
#include <string>

using namespace std;

int main() {
	// 암호
	string code;
	cout << "암호를 입력하시오: ";
	getline(cin, code);		// 한 줄 입력받기

	// 숫자,대문자,소문자 존재여부 확인
	bool upper = false;
	bool lower = false;
	bool num = false;

	// 암호 검사
	for (int i = 0; i < code.size(); i++) {
		// 숫자(ASCII 48~57)
		if (code[i] > 47 && code[i] < 58)
			num = true;

		// 대문자(ASCII 65~90)
		else if (code[i] > 64 && code[i] < 91)
			upper = true;

		// 소문자(ASCII 97~122)
		else if (code[i] > 96 && code[i] < 123)
			lower = true;
	}

	// 모두 참일 때
	if (upper && lower && num)
		cout << "안전합니다.";
	else
		cout << "안전하지 않습니다.";

	return 0;
}