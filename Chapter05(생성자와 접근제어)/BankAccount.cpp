#include "Chapter05.h"

void BankAccount::deposit(int money) {
	cout << "�Ա� �� : " << balance << endl;
	balance += money;	// �ܰ� �Ա�
	cout << "�Ա� �� : " << balance << endl;
}

void BankAccount::withdraw(int money) {
	cout << "��� �� : " << balance << endl;
	balance -= money;	// �ܰ��� ���
	cout << "��� �� : " << balance << endl;

}