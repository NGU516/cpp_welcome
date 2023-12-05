#include <iostream>
using namespace std;

int main() {
	string input = "";

	try {
		cout << "가위, 바위, 보 게임입니다." << endl;
		cout << "무엇을 내시겠습니까: ";
		cin >> input;

		if ( (input == "가위") || (input == "바위") || (input == "보") ) {
			cout << input << "를 선택했습니다." << endl;
		}
		else    // 예외 처리 시킬 부분
			throw input;
	}
	catch (string e) {		// 예외 처리 동작(에러 메시지 출력), "출력은 \문자 사용
		cout << "오류: \"가위\", \"바위\", \"보\" 중에서만 선택하세요." << endl;
	}

	return 0;
}