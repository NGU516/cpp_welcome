#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0, max = 0, min = 0;		// 정수 개수, 최대값, 최소값, 임시값 변수 선언
	vector<int> number;		// 정수를 저장할 벡터 선언

	cout << "정수의 개수: ";
	cin >> n;

	for(int i = 0; i < n; i++){		// 정수의 개수만큼 반복
		int temp = 0;

		cout << "정수를 입력하시오: ";
		cin >> temp;
		number.push_back(temp);		// vector에 데이터 추가, push_back() == append()
	}

	min = number[0];			

	for (auto& num : number) {	// vector 크기만큼 범위 기반 루프
		if (num >= max)
			max = num;
		else if (num <= min)
			min = num;
	}
	
	cout << "최대값: " << max << endl;
	cout << "최소값: " << min << endl;

	return 0;
}