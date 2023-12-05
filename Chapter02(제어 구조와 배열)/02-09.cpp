#include "main.h"

// 온도 0~100도를 10도 간격으로 변환
void Print_9()
{
	// F = 화씨온도, C = 섭씨온도
	double C;
	
	for (int F = 0; F <= 100; F += 10)
	{
		C = (F - 32.0) * 5.0 / 9.0;
		cout << F << "\t" << C << endl;
	}

}