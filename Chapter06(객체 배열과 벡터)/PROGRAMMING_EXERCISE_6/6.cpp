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
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name;
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> tel;

		arr.push_back(Contact(name, tel));
	}

	// Ž������ �̸��� ������ ����
	cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
	cin >> name;

	for (auto& a : arr) {	// ���� �迭�� ���������� Ž��
		if (a.get_name() == name) {	// ���� �迭�� �̸� ���� Ž���ϴ� �̸��� ��ġ�� �� ���
			cout << "��ȭ��ȣ : " << a.get_tel();
		}
	}

	return 0;
}