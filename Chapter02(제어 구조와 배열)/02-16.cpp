#include "main.h"


void Print_16()
{
	srand((const int)time(NULL));

	int cash = 50;
	int goal_cash = 250;
	double win = 0;
	double lose = 0;
	double bets = 0;

	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal_cash << endl;

	// 100�� ����
	for (int i = 0; i < 1000; i++) 
	{
		// ���ึ�� �� �ʱ�ȭ
		cash = 50;
		goal_cash = 250;
		
		while (cash != goal_cash)
		{
			bets++;

			// �������� 0.5���� ������ �̱� ������ ����
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else
				cash--;

			// ���� �� while�� ����������
			if (cash == 0)
			{
				lose += 1;
					break;
			}
				
		}

		if (cash >= goal_cash)
			win += 1;
	}
	
	cout << "1000 ���� " << win << "�� �¸�" << endl;
	cout << "�̱� Ȯ�� = " << (win / 1000)*100 << endl;
	cout << "��� ���� Ƚ�� = " << bets / 1000 << endl;

}