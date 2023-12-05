#include "chapter04.h"

void BankAccount::init(string n, int b) {
	number = n;
	balance = b;
}

void BankAccount::deposit(int amount) { // �Ա�
	cout << "after deposit(" << balance << ")";
	balance += amount;
	cout << "���� �ܾ�: " << balance << endl;
	 
}

void BankAccount::withdraw(int amount) { // ���
	cout << "after withdraw(" << balance << ")";
	balance -= amount;
	cout << "���� �ܾ�: " << balance << endl;
}

void BankAccount::print() {
	cout << "���� �ܾ�: " << balance << endl;
}