#include <iostream>

using namespace std;

int main() {

	int n, m, count = 0;
	cin >> n;
	cin >> m;

	for(int a = 0; a < 40; a++) {
		for(int b = 0; b < 40; b++) {
			if((a * a + b == n) && (a + b * b == m)) {
				count = count + 1;
			}
		}
	}

	cout << count;

	return 0;
}