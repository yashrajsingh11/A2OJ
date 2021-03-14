#include <iostream>

using namespace std;

int main() {

	int n, temp, count = -1, mainCount = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> temp;
		count = count + temp;
	}

	n = n + 1;

	for(int i = count + 1; i < count + 6; i++) {
		if(i % n == 0) {
			mainCount = mainCount + 1;
		}
	}

	cout << 5 - mainCount;

	return 0;
}