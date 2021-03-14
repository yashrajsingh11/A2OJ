#include <iostream>

using namespace std;

int main() {

	int n, diff = 1000, t1, t2;
	cin >> n;
	int heights[101];

	for(int i = 0; i < n; i++) {
		cin >> heights[i];
	}

	heights[n] = heights[0];

	for(int i = 1; i <= n; i++) {
		int temp = abs(heights[i] - heights[i - 1]);
		if(temp < diff) {
			diff = temp;
			t1 = i;
			t2 = i - 1;
		}
	}

	if(t1 == n) {
		t1 = 0;
	}

	t1 = t1 + 1;
	t2 = t2 + 1;

	cout << t2 << " " << t1;

	return 0;
}