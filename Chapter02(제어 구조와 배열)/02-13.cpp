#include "main.h"

void Print_13()
{
	int n;

	cout << "�� �ױ��� ���ұ��: ";
	cin >> n;

	// int�迭 �����Ҵ�(new)
	int* fibonacci = new int[n];

	fibonacci[0] = 0;
	fibonacci[1] = 1;

	// �迭�� ���� �� ���� �� ���� �� ��
	for (int i = 2; i < n; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	for (int i = 0; i < n; i++)
	{
		cout << fibonacci[i] << " ";
	}
	// �޸�����
	delete[] fibonacci;

}