#include "main.h"

int main() {

	while (1) {

		cout << "1. 02-09��\n2. 02-13��\n3. 02-16��" << endl;
		cout << "�����Ϸ��� 0�� �Է��Ͻÿ�." << endl;

		// int ������ ������ ���ڸ� ������ �ڵ����� -> ���ڿ� ����
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
			cout << "�ٽ� �Է��Ͻÿ�." << endl;

		cout << endl;
	}

	return 0;
}