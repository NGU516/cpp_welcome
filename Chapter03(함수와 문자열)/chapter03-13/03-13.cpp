#include <iostream>
#include <string>

using namespace std;

int main() {
	// ��ȣ
	string code;
	cout << "��ȣ�� �Է��Ͻÿ�: ";
	getline(cin, code);		// �� �� �Է¹ޱ�

	// ����,�빮��,�ҹ��� ���翩�� Ȯ��
	bool upper = false;
	bool lower = false;
	bool num = false;

	// ��ȣ �˻�
	for (int i = 0; i < code.size(); i++) {
		// ����(ASCII 48~57)
		if (code[i] > 47 && code[i] < 58)
			num = true;

		// �빮��(ASCII 65~90)
		else if (code[i] > 64 && code[i] < 91)
			upper = true;

		// �ҹ���(ASCII 97~122)
		else if (code[i] > 96 && code[i] < 123)
			lower = true;
	}

	// ��� ���� ��
	if (upper && lower && num)
		cout << "�����մϴ�.";
	else
		cout << "�������� �ʽ��ϴ�.";

	return 0;
}