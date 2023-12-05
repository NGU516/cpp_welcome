#include <iostream>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string n="", int s=0) :name{n}, salary{s} {}

	// ������ �� ������
	string getName() { return name; }
	int getSalary() { return salary; }
	void setName(string n) { name = n; }
	void setSalary(int s) { salary = s; }
	
	int computerSalary() { return salary; }
};

class Manager :public Employee {
	int bonus;
public:
	Manager(string n="", int s=0, int b=0) :Employee(n, s), bonus{b} {}

	int getBonus() { return bonus; }
	void setBonus(int b) { bonus = b; }

	int computerSalary() {
		Employee::computerSalary();
		int temp = getSalary() + getBonus();
		return temp;
	}
	void print() {
		cout << "�̸�: " << getName() << endl;
		cout << "����: " << getSalary() << endl;
		cout << "���ʽ�: " << getBonus() << endl;
		cout << "��ü �޿�: " << computerSalary() << endl;
	}
};

int main() {
	Manager a("��ö��", 200, 100);
	a.print();

	return 0;
}