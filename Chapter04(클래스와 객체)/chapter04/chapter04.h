#ifndef CHAPTER04_H
#define CHAPTER04_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// "" 프로그래머가 만든 헤더파일
// <> 공식 헤더파일
// 헤더파일 클래스 정의(멤버 함수 프로토타입 선언)

using namespace std;

// exercise 3 , programming exercise 6
class Employee {

private:
    string name;
    int age;
    long long salary;
    int years;

public:
    // 생성자(초기화) 및 소멸자
    Employee(string name = "", int age = 0, long long salary = 0, int years = 0) : name{ name }, age{ age }, salary{ age }, years{ years } {
    }
    ~Employee() {}

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    long long getSalary() {
        return salary;
    }
    int getYears() {
        return years;
    }

    void setName(string a) {
        name = a;
    }
    void setAge(int a) {
        age = a;
    }
    void setSalary(long long a) {
        salary = a;
    }
    void setYears(int a) {
        years = a;
    }
    void Print_Employee();

};

// exercise 4
void Print_Exercise04();

// programming exercise 1
class Person {
    string name;
    int age;

public:
    // 생성자(초기화) 및 소멸자
    Person(string name = "", int age = 0) : name{ name }, age{ age } {
    }
    ~Person() {}

    void setPerson(string nameval, int ageval);
    void print();

};

// programming exercise 2
class Computer {
    string name;
    int RAM;
    double cpu_speed;

public:
    // 생성자(초기화) 및 소멸자
    Computer(string name = "", int RAM = 0, double cpu_speed = 0) : name{ name }, RAM{ RAM }, cpu_speed{ cpu_speed } {
    }
    ~Computer() {}

    void setComputer(string nameval, int RAMval, double cpu_speedval);
    void print();
   
};

// programming exercise 3
class Sum {
    int n1, n2;

public:
    // 생성자(초기화) 및 소멸자
    Sum(int x = 0, int y = 0) : n1{ x }, n2{ y } {
    }
    ~Sum() {}

    void init(int x, int y);
    void add();
   
};

// programming exercise 5
class Dice {

public:
    void roll();
};

// programming exercise 8
class Complex {
public:
    double r; // 실수부
    double i; // 허수부
    
    bool plus = true;   // + or -

    Complex(double r = 0, double i = 0, bool plus = true) : r{ r }, i{ i }, plus{ plus } {
    }
    ~Complex(){}

    void print();

};

// programming exercise 9
class Triangle {
    // base(밑변), height(높이), area(면적)
    int b, h, a;

public:
    Triangle(int base = 0, int height = 0, int area = 0) : b{ base }, h{ height }, a{ area } {
    }
    ~Triangle(){}

    void area();
    void print();
};

// programming exercise 10
class BankAccount {
    // 계좌번호, 잔액
    string number;
    int balance;

public:
    BankAccount(string n = "", int b = 0) : number(n), balance{ b } {
    }
    ~BankAccount(){}

    void init(string n, int b);
    // 입금
    void deposit(int amount);
    // 출금
    void withdraw(int amount);
    // 현재 잔액 출력
    void print();
};
#endif
