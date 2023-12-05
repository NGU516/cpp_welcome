#include <iostream>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string n="", int s=0) :name{n}, salary{s} {}

	// 접근자 및 설정자
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
		cout << "이름: " << getName() << endl;
		cout << "월급: " << getSalary() << endl;
		cout << "보너스: " << getBonus() << endl;
		cout << "전체 급여: " << computerSalary() << endl;
	}
};

int main() {
	Manager a("김철수", 200, 100);
	a.print();

	return 0;
}