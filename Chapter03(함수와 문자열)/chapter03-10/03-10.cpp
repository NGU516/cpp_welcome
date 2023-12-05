#include <iostream>
#include <random>

using namespace std;

int filp() {	// 동전 던지기
	// 앞면, 뒷면
	return rand() % 2;
}

int main() {
	int front = 0;
	int back = 0;


	for (int i = 0; i < 100; i++) {
		int a = filp();

		if (a == 0)		// 앞면
			front += 1;
		else			// 뒷면
			back += 1;
	}

	cout << "동전의 앞면: " << front << endl;
	cout << "동전의 뒷면: " << back << endl;


	return 0;

}