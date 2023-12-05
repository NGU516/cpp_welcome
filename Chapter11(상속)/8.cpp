#include <iostream>
using namespace std;

class Human {
	string name;
	int age;
public:
	Human(string n = "", int a = 0) : name{ n }, age{ a } {};
	~Human() {}

	// Á¢±ÙÀÚ ¹× ¼³Á¤ÀÚ
	string getName() { return name; }
	int getAge() { return age; }
	void setName(string n) { name = n; }
	void setAge(int a) { age = a; }

	void print() {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
};

class Student:public Human {
	string major;
public:
	Student(string n="", int a=0, string m="") : Human(n, a), major{m} {}
};
int main() {
	Human a("ÃáÇâ", 18);
	Human b("¸ù·æ", 21);
	Human c("»ç¶Ç", 50);

	Student d("test", 50, "test");
	d.print();
	
	return 0;
}