#include "Chapter05.h"

void BankAccount::deposit(int money) {
	cout << "입금 전 : " << balance << endl;
	balance += money;	// 잔고에 입금
	cout << "입금 후 : " << balance << endl;
}

void BankAccount::withdraw(int money) {
	cout << "출금 전 : " << balance << endl;
	balance -= money;	// 잔고에서 출금
	cout << "출금 후 : " << balance << endl;

}