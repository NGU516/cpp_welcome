#include <iostream>
#include <vector>
using namespace std;

class Contact {
	string name;
	string tel;
public:
	Contact(string n, string t):name{n}, tel{t}{}
	~Contact() {}

	string get_name() { return name; }
	string get_tel() { return tel; }
};

int main() {
	vector<Contact> arr;

	string name;
	string tel;

	for (int i = 0; i < 3; i++) {
		cout << "이름을 입력하시오 : ";
		cin >> name;
		cout << "전화번호를 입력하시오 : ";
		cin >> tel;

		arr.push_back(Contact(name, tel));
	}

	// 탐색싶은 이름을 변수에 저장
	cout << "탐색하고 싶은 이름을 입력하시오 : ";
	cin >> name;

	for (auto& a : arr) {	// 동적 배열을 순차적으로 탐색
		if (a.get_name() == name) {	// 동적 배열의 이름 값과 탐색하는 이름이 일치할 시 출력
			cout << "전화번호 : " << a.get_tel();
		}
	}

	return 0;
}