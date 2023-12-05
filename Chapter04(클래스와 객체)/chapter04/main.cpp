#include "chapter04.h"

// ��ü�� ���� �����Ⱚ ó��(Ŭ���� �� ������ ����)

int main()
{
	int num;

	while (1)
	{
		cout << "1. Exercise 3\n2. Exercise 4\n3. Person\n4. Computer\n5. Sum\n6. Dice\n7. Employee\n8. Complex\n9. Triangle\n10. BankAccount" << endl;
		cin >> num;

		if (num == 0)
			break;

		else if (num == 1){
			Employee a;

			a.setAge(26);
			a.setName("ȫ�浿");
			a.setSalary(1000000);
			a.setYears(1);
			a.Print_Employee();
		}
			
		else if (num == 2)
			Print_Exercise04();

		else if (num == 3){
			Person obj;
			obj.setPerson("��ö��", 21);
			obj.print();
		}
		
		else if (num == 4) {
			Computer obj;

			obj.setComputer("���ǽ���ǻ��", 8, 4.2);	
			obj.print();
		}

		else if (num == 5) {
			Sum obj;

			obj.init(10, 20);
			obj.add();
		}

		else if (num == 6) {
			Dice obj;

			obj.roll();
			obj.roll();
		}

		else if (num == 7) {
			Employee Employee1("��ö��", 38, 2000000);
			Employee1.Print_Employee();
		}

		else if (num == 8) {
			Complex obj(5.0, 3.0, true); // +����
			obj.print();
			Complex obj2(3.0, 4.0, false); // -����
			obj2.print();
		}
		
		else if (num == 9) {
			Triangle obj(3, 4);
			obj.area(); // ���� ���ϱ� (�Լ� ȣ����� ��� a ������ �� ���)
			obj.print();
		}

		else if (num == 10) {
			BankAccount obj("1234556789", 1000000);
			obj.print();
			obj.deposit(1000000);
			obj.withdraw(1000000);
		}

		cout << endl;

	}
	
	return 0;
}