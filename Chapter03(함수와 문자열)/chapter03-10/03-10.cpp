#include <iostream>
#include <random>

using namespace std;

int filp() {	// ���� ������
	// �ո�, �޸�
	return rand() % 2;
}

int main() {
	int front = 0;
	int back = 0;


	for (int i = 0; i < 100; i++) {
		int a = filp();

		if (a == 0)		// �ո�
			front += 1;
		else			// �޸�
			back += 1;
	}

	cout << "������ �ո�: " << front << endl;
	cout << "������ �޸�: " << back << endl;


	return 0;

}