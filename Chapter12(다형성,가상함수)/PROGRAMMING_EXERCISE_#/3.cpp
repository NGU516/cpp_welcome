#include <iostream>	
using namespace std;

class HomeAppliance {
protected:
	int price;
public:
	HomeAppliance(int p):price(p){}
	virtual ~HomeAppliance() { cout << "HomeAppliance �Ҹ���" << endl; }
	virtual double getPrice() = 0;	// ���� ���� �Լ�
};

class Television :public HomeAppliance {
public:
	Television(int price): HomeAppliance(price) {}
	~Television() { cout << "Television �Ҹ���" << endl; }
	double getPrice() { return price - ((10.0 / 100.0) * price); }	// 10% ����
};

class Refrigerator :public HomeAppliance {
public:
	Refrigerator(int price): HomeAppliance(price) {}
	~Refrigerator() { cout << "Refrigerator �Ҹ���" << endl; }
	double getPrice(){return price - ((5.0 / 100.0) * price); }	// 5% ����
};

int main() {
	Television a(100000);
	cout << "����: " << a.getPrice() << endl;
	Refrigerator b(200000);
	cout << "����: " << b.getPrice() << endl;

	return 0;
}