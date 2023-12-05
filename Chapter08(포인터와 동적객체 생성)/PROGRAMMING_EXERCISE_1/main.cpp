#include <iostream>

using namespace std;

// EXERCISE 11(Rect Ŭ����, const �ִ��� �߰�)
class Rect {
	int width;
	int height;
public:
	// ������
	int const get_width() { return width; }
	int const get_height() { return height; }
	int const getArea() { return (width * height); }	// ����, const�� ���� ������� ���� X
	int const getPerimeter() { return (width + height) * 2; }	// �ѷ�, const�� ���� ������� ���� X
	// ������
	void set_width(const int w) { width = w; }	// �Լ� ���ο��� w ���� X
	void set_height(const int h) { height = h; }	// �Լ� ���ο��� h ���� X
	void print() { cout << "width : " << width << " height : " << height << endl; }

	// EXERCISE 15
	bool is_equal(Rect r1, Rect r2) {
		if ((r1.get_width() == r2.get_width()) && (r1.get_height() == r2.get_height()))
			return true;
		else
			return false;

	};
	// EXERCISE 16
	// ������ ���� ����Ǳ� ������ ��ü ���縦 �������� �ʾ� ������ �޸� ȿ������
	// ������ ���� ����Ǳ� ������ ���� ������ ���� ������ const������ ���־�� ��.
	bool is_equal(Rect& r1, Rect& r2) { // const Rect& r1, const Rect& r2
		if ((r1.get_width() == r2.get_width()) && (r1.get_height() == r2.get_height()))
			return true;
		else
			return false;
	};

};

// PROGRAMMING_EXERCISE 5��
class Student {
	string name;
public:
	Student(string name = "") : name{ name } {}
	string getName() { return name; }
	void setName(string name) { this->name = name; }	// �Ű����� name�� Student�� ��� ���� �� ����
};

int main() {

	int* p = nullptr;
	int i;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> i;

	p = new int[i];	// i ũ���� ���� �迭 ����

	for (int j = 0; j < i; j++) {	// ���� �Է�
		int num;
		cout << "������ �Է��Ͻÿ� : ";
		cin >> num;

		p[j] = num;
	}

	cout << "�Էµ� ������: ";
	for (int j = 0; j < i; j++) {	// ���
		cout << p[j];
		if (!(j == i - 1))	// ������ ���ڿ��� , ��� X
			cout << ",";
	}
	cout << endl;

	delete[] p;		// ���� �迭 �޸� ��ȯ

	return 0;
}