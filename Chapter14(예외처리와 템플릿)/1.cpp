#include <iostream>
using namespace std;

int main() {
	int age = 0;
	
	try {	// ����ó�� ����
		cout << "���̸� �Է��Ͻÿ�: ";
		cin >> age;
		
		if (age < 0)
			throw age;	// catch �� age�� ������, ����ó���� ����
		cout << age << "��" << endl;
	}
	catch (int e) {		// ����ó���� �κп� ���� �����޽��� ���
		cout << "����: ����� �Է��Ͽ��� ��" << endl;
	}

	return 0;
}