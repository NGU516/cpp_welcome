#include "Chapter05.h"

int main() {
	cout << "1. Point\n2. Person\n3. BankAccount\n4. Airplane\n5. Box\n6. Movie\n7. Complex add" << endl;

	while (1) {
		int num = 0;
		cin >> num;

		if (num == 0)
			break;
		else if (num == 1) {
			Point obj(100, 200);
			obj.Print();
			obj.~Point();	//	소멸자
		}
		else if (num == 2) {
			Person obj("cdm", 010010, 22);
			obj.Print();
			obj.~Person();
		}
		else if (num == 3) {
			BankAccount obj(1000000); // 잔고에 10만원, 이자율 = 기본이자율(5%)
			obj.deposit(20);
			obj.withdraw(20);
			obj.~BankAccount();
		}
		else if (num == 4) {
			Airplane obj1("Air1", 300, 4);
			Airplane obj2("Air2", 400, 5);

			obj1.getCapacity();
			obj1.setCapacity(999);
			obj1.Print();
			obj2.getSpeed();
			obj2.setSpeed(999);
			obj2.Print();
		}
		else if (num == 5) {
			Box obj1;
			Box obj2("박스 #2", 3, 2, 4, true);
			obj1.Print();
			obj2.Print();
		}
		else if (num == 6) {
			Movie obj1("타이타닉", "제임스 카메론", 9.5);
			Movie obj2;

			cout << "영화 #1" << endl;
			obj1.Print();
			cout << "영화 #2" << endl;
			obj2.Print();
			obj2.setTitle("지오스톰");
			obj2.setDirector("딘 데블린");
			obj2.setRating(8.34);
			cout << "영화 #2" << endl;
			obj2.Print();
		}
		else if (num == 7) {
			Complex obj1(5, 3);
			Complex obj2(3, -4);

			Complex add = obj1.add(obj1, obj2);
			if (add.getI() >= 0)
				cout << "(" << add.getR() << " + " << add.getI() << ")";
			else
				cout << "(" << add.getR() << add.getI() << "i)";

		}
	}
}