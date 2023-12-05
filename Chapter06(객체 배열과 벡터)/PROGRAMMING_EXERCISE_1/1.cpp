#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0, max = 0, min = 0;		// ���� ����, �ִ밪, �ּҰ�, �ӽð� ���� ����
	vector<int> number;		// ������ ������ ���� ����

	cout << "������ ����: ";
	cin >> n;

	for(int i = 0; i < n; i++){		// ������ ������ŭ �ݺ�
		int temp = 0;

		cout << "������ �Է��Ͻÿ�: ";
		cin >> temp;
		number.push_back(temp);		// vector�� ������ �߰�, push_back() == append()
	}

	min = number[0];			

	for (auto& num : number) {	// vector ũ�⸸ŭ ���� ��� ����
		if (num >= max)
			max = num;
		else if (num <= min)
			min = num;
	}
	
	cout << "�ִ밪: " << max << endl;
	cout << "�ּҰ�: " << min << endl;

	return 0;
}