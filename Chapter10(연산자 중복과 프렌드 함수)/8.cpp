#include <iostream>

using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real{ r }, imag{ i } { cout << "������ ȣ��" << endl; }
    ~Complex() { cout << "�Ҹ��� ȣ��" << endl; }
    Complex operator+(const Complex& c2);
    Complex operator-(const Complex& c2);
    Complex& operator+=(const Complex& c2);
    Complex& operator-=(const Complex& c2);
    // ������ �Լ��� ����
    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);

    friend ostream& operator<<(ostream& os, const Complex& c1) {    // ���
        os << '(' << c1.real << ',' << c1.imag << ')' << endl;

        return os;
    }

    friend istream& operator>>(istream& is, Complex& c1) {  // �Է�
        cout << "�Ǽ� : " << endl;
        is >> c1.real;
        cout << "��� : " << endl;
        is >> c1.imag;

        return is;
    }

    bool operator==(const Complex& c2) const {
        return (this->real == c2.real) && (this->imag == c2.imag);
    }

    bool operator!=(const Complex& c2) const {  // �����ص� == ���
        return !(*this == c2);
    }

    operator double() const {   // double �� ��ȯ
        return sqrt(real * real + imag * imag);
    }

    void print() { 
        if (imag >= 0)
            cout << real << '+' << imag << 'i' << endl;
        else
            cout << real << imag << 'i' << endl;
    }
};

Complex Complex::operator+(const Complex& c2) {  // c2�� ������� ���� ����
    Complex c1; // ���� ���� ������ �ӽ� ��ü
    c1.real = this->real + c2.real;
    c1.imag = this->imag + c2.imag;
    return c1;
}   // �ӽ� ��ü �Ҹ�

Complex Complex::operator-(const Complex& c2) {
    Complex c1;
    c1.real = this->real - c2.real;
    c1.imag = this->imag - c2.imag;
    return c1;
}

Complex& Complex::operator+=(const Complex& c2) {   // return���� �ڱ� �ڽ�(��ü)�� �ּҷ� ����
    this->real = this->real + c2.real;
    this->imag = this->imag + c2.imag;
    return *this;
}

Complex& Complex::operator-=(const Complex& c2) {
    this->real = this->real - c2.real;
    this->imag = this->imag - c2.imag;
    return *this;
}

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

Complex operator-(const Complex& c1, const Complex& c2) {
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}



int main() {
    Complex c1(1.0, 7.0);
    double temp = double(c1);   // ���� ���
    cout << temp << endl;

    Complex c2(3.0, 8.0);
    Complex c3 = c1 + c2;
    c3.print();

    Complex c4 = c1.operator+(c2);
    c4.print();

    c1 -= c2;
    c1.print();
    
    c1 += c2;
    cout << c1 << endl; // cout ��� ���� <real, imga>
    cout << boolalpha <<(c1 != c2) << endl; // true, false ���(boolalpha)
    cout << boolalpha << (c1 == c2) << endl;

    return 0;
}