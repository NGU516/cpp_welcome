#include <iostream>
#include <string>
using namespace std;

int main() {

	// ASCII 문자 빈도수 저장 배열(0부터 255까지의 ASCII 코드에 해당)
	int counter[256] = { 0 };

	string s;

	cout << "문자열을 입력하세요: ";

	getline(cin, s);	// 한 줄을 입력받음

	for (int i = 0; i < s.size(); i++) {
		counter[s[i]]++;	// s[i]번째 문자의 빈도수 증가
	}

	// 출력: 공백부터 '~'까지의 ASCII 문자에 대한 빈도수
	for (int i = 32; i < 127; i++) {
		// 해당 ASCII 코드에 대응하는 문자 출력
		char c = i;
		cout << c << " : " << counter[i] << endl;
	}

	return 0;

}
