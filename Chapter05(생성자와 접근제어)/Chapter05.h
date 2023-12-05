#ifndef MAIN_H
#define MAIN_H

#include <iostream>

using namespace std;

// EXERCISE 1
// x, y
class Point {
private:
	int x, y;
public:
	Point(int xval=0, int yval=0) : x{ xval }, y{ yval } { // 생성자(멤버 초기화 리스트)
	}
	~Point(){}	// 소멸자

	void Point_init(int xval, int yval);
	void Print();
};

// EXERCISE 2
// name, number, age
class Person {
private:
	string name;
	int number;	// 주민등록번호
	int age;
public:
	Person();
	Person(string nameval, int numberval, int ageval): name{nameval}, number{numberval}, age{ageval}{}
	~Person(){}
	
	void Print();
};

// EXERCISE 3
// balance, rate
class BankAccount {
private:
	int balance;
	double rate;
public:
	BankAccount(int b = 0, double r = 5): balance{b}, rate{r}{}
	~BankAccount(){}

	void deposit(int money);		// 입급
	void withdraw(int money);	// 출금
};

// PROGRAMING EXERCISE 2
// name, capacity, speed
class Airplane {
private:
	string name;
	int capacity;	// 승객 수
	int speed;
public:
	Airplane();
	Airplane(string n = "", int c = 0, int s = 0): name{n}, capacity{c}, speed{s}{}
	~Airplane() {};

	void getName();
	void getCapacity();
	void getSpeed();
	void setName(string n);
	void setCapacity(int c);
	void setSpeed(int s);
	void Print();
};

// PROGRAMING EXERCISE 3
// length, width, height
class Box {
private:
	string name;
	int length;
	int width;
	int height;
	bool is_Box = false;
public:

	Box(string n = "", int l = 0, int w = 0, int h = 0, bool i = true) : name{n}, length{l}, width{w}, height{h}, is_Box{true} {}
	~Box() {};
	
	int getLength();
	int getWidth();
	int getHeight();
	bool empty();
	int getVolume();
	void Print();
};

// PROGRAMING EXERCISE 4
// title, director, rating
class Movie {
private:
	string title;
	string director;
	double rating;
public:
	Movie(string t = "", string d = "", double r = 0) :title{t}, director{d}, rating{r}{}
	~Movie() {};

	string getTitle();
	string getDirector();
	double getRating();

	void setTitle(string t);
	void setDirector(string d);
	void setRating(double t);

	void Print();

};

// PROGRAMING EXERCISE 5
// double r, double i
class Complex {
	double r;
	double i;
public:
	Complex(double rval = 0, double ival = 0):r{rval},i{ival}{}
	~Complex() {};

	double getR();
	double getI();

	void setR(double rval);
	void setI(double ival);

	void Print();

	Complex add(Complex a, Complex b);
};
#endif