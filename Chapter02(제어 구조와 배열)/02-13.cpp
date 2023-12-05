#include "main.h"

void Print_13()
{
	int n;

	cout << "몇 항까지 구할까요: ";
	cin >> n;

	// int배열 동적할당(new)
	int* fibonacci = new int[n];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	// 배열에 저장 후 앞의 두 수를 더 함
	for (int i = 2; i < n; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (int i = 0; i < n; i++)
	{
		cout << fibonacci[i] << " ";
	}
	// 메모리해제
	delete[] fibonacci;

}