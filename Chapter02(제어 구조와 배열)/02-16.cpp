#include "main.h"


void Print_16()
{
	srand((const int)time(NULL));

	int cash = 50;
	int goal_cash = 250;
	double win = 0;
	double lose = 0;
	double bets = 0;

	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal_cash << endl;

	// 100번 시행
	for (int i = 0; i < 1000; i++) 
	{
		// 시행마다 돈 초기화
		cash = 50;
		goal_cash = 250;
		
		while (cash != goal_cash)
		{
			bets++;

			// 난수값이 0.5보다 작으면 이긴 것으로 간주
			if ((double)rand() / RAND_MAX < 0.5)
				cash++;
			else
				cash--;

			// 졌을 때 while문 빠져나가기
			if (cash == 0)
			{
				lose += 1;
					break;
			}
				
		}

		if (cash >= goal_cash)
			win += 1;
	}
	
	cout << "1000 중의 " << win << "번 승리" << endl;
	cout << "이긴 확률 = " << (win / 1000)*100 << endl;
	cout << "평균 배팅 횟수 = " << bets / 1000 << endl;

}