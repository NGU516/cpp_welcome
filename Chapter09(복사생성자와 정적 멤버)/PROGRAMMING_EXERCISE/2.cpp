#include <iostream>

using namespace std;

class Line {
	int* ptr;	// ���� ���� ����
public:
	int getLength(void);
	Line(int len);
	Line(const Line& other);	// ���� ������
	~Line() { delete ptr; }
};

// �Ϲ� ������
Line::Line(int len) {
	cout << "�Ϲ� ������" << endl;
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line& other) {
	cout << "���� ������" << endl;
	this->ptr = new int;		// �����Ҵ����� ������ ���� ������ ���� ����
	*(this->ptr) = *(other.ptr);		// �����Ҵ� �� ������ ������ ��ü �ֱ�
}

int Line::getLength() {
	return *ptr;
}



int main() {
	Line line1(10); // �Ϲ� ������ ȣ��
	Line line2(line1); // ���� ������ ȣ��, line1�� ������� line2�� ����
	Line line3(line2); // ���� ������ ȣ��, line2�� ������� line3�� ����
	cout << "���� ����: " << line2.getLength() << endl;
	cout << "���� ������" << endl;
	cout << "���� ����: " << line3.getLength() << endl;
	

	return 0;
}