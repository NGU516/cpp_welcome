#include <iostream>
using namespace std;

template <class T>
T getAvergage(T arr[], unsigned int n) {	// n은 배열 길이이므로 0보다 큰 양수
	T sum = 0;
	T average = 0;

	for (unsigned int i = 0; i < n; i++)
		sum += arr[i];
	
	average = sum / n;

	return average;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	double n = getAvergage(list, 5);

	cout << "평균값: " << n << endl;

	return 0;
}