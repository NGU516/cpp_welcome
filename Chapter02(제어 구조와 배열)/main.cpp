#include "main.h"

int main() {

	while (1) {

		cout << "1. 02-09번\n2. 02-13번\n3. 02-16번" << endl;
		cout << "종료하려면 0을 입력하시오." << endl;

		// int 형으로 지정시 문자를 받으면 자동종료 -> 문자열 선언
		string num;
		cin >> num;

		if (num == "0")
			break;

		if (num == "1")
			Print_9();
		else if (num == "2")
			Print_13();
		else if (num == "3")
			Print_16();
		else
			cout << "다시 입력하시오." << endl;

		cout << endl;
	}

	return 0;
}