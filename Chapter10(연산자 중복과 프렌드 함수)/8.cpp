#include <iostream>

using namespace std;

class Complex {
private:
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real{ r }, imag{ i } { cout << "생성자 호출" << endl; }
    ~Complex() { cout << "소멸자 호출" << endl; }
    Complex operator+(const Complex& c2);
    Complex operator-(const Complex& c2);
    Complex& operator+=(const Complex& c2);
    Complex& operator-=(const Complex& c2);
    // 프렌드 함수로 선언
    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend Complex operator-(const Complex& c1, const Complex& c2);

    friend ostream& operator<<(ostream& os, const Complex& c1) {    // 출력
        os << '(' << c1.real << ',' << c1.imag << ')' << endl;

        return os;
    }

    friend istream& operator>>(istream& is, Complex& c1) {  // 입력
        cout << "실수 : " << endl;
        is >> c1.real;
        cout << "허수 : " << endl;
        is >> c1.imag;

        return is;
    }

    bool operator==(const Complex& c2) const {
        return (this->real == c2.real) && (this->imag == c2.imag);
    }

    bool operator!=(const Complex& c2) const {  // 정의해둔 == 사용
        return !(*this == c2);
    }

    operator double() const {   // double 형 변환
        return sqrt(real * real + imag * imag);
    }

    void print() { 
        if (imag >= 0)
            cout << real << '+' << imag << 'i' << endl;
        else
            cout << real << imag << 'i' << endl;
    }
};

Complex Complex::operator+(const Complex& c2) {  // c2의 멤버변수 변경 방지
    Complex c1; // 연산 값을 저장할 임시 객체
    c1.real = this->real + c2.real;
    c1.imag = this->imag + c2.imag;
    return c1;
}   // 임시 객체 소멸

Complex Complex::operator-(const Complex& c2) {
    Complex c1;
    c1.real = this->real - c2.real;
    c1.imag = this->imag - c2.imag;
    return c1;
}

Complex& Complex::operator+=(const Complex& c2) {   // return값을 자기 자신(객체)의 주소로 받음
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
    double temp = double(c1);   // 절댓값 출력
    cout << temp << endl;

    Complex c2(3.0, 8.0);
    Complex c3 = c1 + c2;
    c3.print();

    Complex c4 = c1.operator+(c2);
    c4.print();

    c1 -= c2;
    c1.print();
    
    c1 += c2;
    cout << c1 << endl; // cout 출력 형태 <real, imga>
    cout << boolalpha <<(c1 != c2) << endl; // true, false 출력(boolalpha)
    cout << boolalpha << (c1 == c2) << endl;

    return 0;
}