#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
	string name;
	double marks;
public:
	Student(string n, double m) : name{n}, marks{m}{}	// 초기화 멤버 리스트
	~Student() {};
	string get_name() { return name; }
	double get_marks() { return marks; }
	void print() {
		cout << "이름 : " << name << endl;
		cout << "학점 : " << marks << endl;
	}
};

bool compare(Student &a, Student &b) {
	return a.get_marks() < b.get_marks();	// a가 더 작은 경우로 정렬, 오름차순 정렬
}

int main() {
	vector<Student> arr;
	
	string name;
	double marks;

	cout << "================================" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "이름 : ";
		cin >> name;
		cout << "학점 : ";
		cin >> marks;

		arr.push_back(Student(name, marks));
	}
	cout << "================================" << endl;

	// sort(vec.begin(), vec.end(), compare);, arr을 copare 규칙에 따라 정렬
	sort(arr.begin(), arr.end(), compare);

	cout << "정렬 후" << endl << endl;
	for (auto& a : arr) {
		a.print();
	}

	return 0;

}