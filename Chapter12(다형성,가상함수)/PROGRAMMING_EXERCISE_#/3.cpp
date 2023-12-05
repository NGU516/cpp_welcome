#include <iostream>	
using namespace std;

class HomeAppliance {
protected:
	int price;
public:
	HomeAppliance(int p):price(p){}
	virtual ~HomeAppliance() { cout << "HomeAppliance 소멸자" << endl; }
	virtual double getPrice() = 0;	// 순수 가상 함수
};

class Television :public HomeAppliance {
public:
	Television(int price): HomeAppliance(price) {}
	~Television() { cout << "Television 소멸자" << endl; }
	double getPrice() { return price - ((10.0 / 100.0) * price); }	// 10% 할인
};

class Refrigerator :public HomeAppliance {
public:
	Refrigerator(int price): HomeAppliance(price) {}
	~Refrigerator() { cout << "Refrigerator 소멸자" << endl; }
	double getPrice(){return price - ((5.0 / 100.0) * price); }	// 5% 할인
};

int main() {
	Television a(100000);
	cout << "가격: " << a.getPrice() << endl;
	Refrigerator b(200000);
	cout << "가격: " << b.getPrice() << endl;

	return 0;
}