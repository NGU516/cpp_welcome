#include <iostream>
using namespace std;

int main() {
	string input = "";

	try {
		cout << "����, ����, �� �����Դϴ�." << endl;
		cout << "������ ���ðڽ��ϱ�: ";
		cin >> input;

		if ( (input == "����") || (input == "����") || (input == "��") ) {
			cout << input << "�� �����߽��ϴ�." << endl;
		}
		else    // ���� ó�� ��ų �κ�
			throw input;
	}
	catch (string e) {		// ���� ó�� ����(���� �޽��� ���), "����� \���� ���
		cout << "����: \"����\", \"����\", \"��\" �߿����� �����ϼ���." << endl;
	}

	return 0;
}