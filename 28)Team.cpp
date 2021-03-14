#include <iostream>

using namespace std;

int main() {

	int n, mainCount = 0;
	int Petya[1000], Vasya[1000], Tonya[1000];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> Petya[i];
		cin >> Vasya[i];
		cin >> Tonya[i];
	}

	for(int i = 0; i < n; i++) {
		int count = Petya[i] + Vasya[i] + Tonya[i];
		if(count >= 2) {
			mainCount = mainCount + 1;
		}
	}

	cout << mainCount;

	return 0;
}