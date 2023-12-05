#include <iostream>
using namespace std;

template <class T>
T getSmallest(T arr[], int n) {		// n은 배열 길이
	T min = arr[0];
	// int len = sizeof(arr) / sizeof(*arr);	// 배열 길이

	for (int i = 0; i < n; i++) {
		if (arr[i] <= min)
			min = arr[i];
	}

	return min;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	cout << "최소값: " << getSmallest(list, 5) << endl;

	return 0;
}