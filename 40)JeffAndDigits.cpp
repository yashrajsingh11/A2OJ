#include <iostream>

using namespace std;

int main() {

	int n, numFive = 0, numZero = 0;
	cin >> n;
	int digits[1000];

	for(int i = 0; i < n; i++) {
		cin >> digits[i];
	}	

	for(int i = 0; i < n; i++) {
		if(digits[i] == 5) {
			numFive = numFive + 1;
		} else if(digits[i] == 0) {
			numZero = numZero + 1;
		}
	}

	int temp = numFive/9;

	if(temp > 0 and numZero > 0) {
		for(int i = 0; i < temp * 9; i++) {
			cout << 5;
		}
		for(int i = 0; i < numZero; i++) {
			cout << 0;
		}
	} else if(temp == 0 and numZero > 0) {
		cout << 0;
	} else {
		cout << -1;
	}

	return 0;
}