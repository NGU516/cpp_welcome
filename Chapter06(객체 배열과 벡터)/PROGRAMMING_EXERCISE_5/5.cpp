#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
	string name;
	double marks;
public:
	Student(string n, double m) : name{n}, marks{m}{}	// �ʱ�ȭ ��� ����Ʈ
	~Student() {};
	string get_name() { return name; }
	double get_marks() { return marks; }
	void print() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << marks << endl;
	}
};

bool compare(Student &a, Student &b) {
	return a.get_marks() < b.get_marks();	// a�� �� ���� ���� ����, �������� ����
}

int main() {
	vector<Student> arr;
	
	string name;
	double marks;

	cout << "================================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "�̸� : ";
		cin >> name;
		cout << "���� : ";
		cin >> marks;

		arr.push_back(Student(name, marks));
	}
	cout << "================================" << endl;

	// sort(vec.begin(), vec.end(), compare);, arr�� copare ��Ģ�� ���� ����
	sort(arr.begin(), arr.end(), compare);

	cout << "���� ��" << endl << endl;
	for (auto& a : arr) {
		a.print();
	}

	return 0;

}