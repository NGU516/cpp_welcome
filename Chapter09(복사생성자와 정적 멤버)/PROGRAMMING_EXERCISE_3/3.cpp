#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass(const char* str);	// ������ ����,����Ű�� char�����Ͱ� ���
	MyClass(const MyClass& other);	// ���� ������ ����
	~MyClass();

	void print();
private:
	char* stored;
};

MyClass::MyClass(const char* str) {	// ������ ����
	cout << "������" << endl;
	stored = new char[strlen(str) + 1];		// str�� ����+1 = NULL���� �����Ҵ�
	strcpy_s(stored, strlen(str)+1, str);	// strcpy_s(������ ��, ����(���� ��踦 ���س���), ������)
}

MyClass::MyClass(const MyClass& other) {	// ���� ������ ����
	cout << "���� ������" << endl;
	stored = new char[strlen(other.stored) + 1];	// ���� ���� �Ҵ�� ���� ����� ���� �ٸ� ���� ���� �Ҵ� ����.
	strcpy_s(stored, strlen(other.stored) + 1, other.stored);
}

MyClass::~MyClass() {
delete[] stored;	// ���� �Ҵ� �� �ڿ� �ݳ�
}

void MyClass::print() {
	cout << "�б޸� : " << stored << endl;
}

int main() {
	const char* str = "1��";

	MyClass class1(str);
	MyClass class2(class1);

	class1.print();
	class2.print();

	return 0;
}