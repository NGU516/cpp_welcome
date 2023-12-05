#include "chapter04.h"

void BankAccount::init(string n, int b) {
	number = n;
	balance = b;
}

void BankAccount::deposit(int amount) { // 입금
	cout << "after deposit(" << balance << ")";
	balance += amount;
	cout << "현재 잔액: " << balance << endl;
	 
}

void BankAccount::withdraw(int amount) { // 출금
	cout << "after withdraw(" << balance << ")";
	balance -= amount;
	cout << "현재 잔액: " << balance << endl;
}

void BankAccount::print() {
	cout << "현재 잔액: " << balance << endl;
}