#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int x[200], y[200];
	int up = 0, down = 0, left = 0, right = 0, count = 0;

	for(int i=  0; i < n; i++) {
		cin >> x[i];
		cin >> y[i];
	}

	for(int i = 0; i < n; i++) {
		int tempX = x[i];
		int tempY = y[i];
		for(int j = 0; j < n; j++) {
			if(i != j) {
				if(tempX == x[j]) {
					if(tempY > y[j]) {
						up = 1;
					} else if(tempY < y[j]) {
						down = 1;
					}
				}
			}
			if(up == 1 and down == 1) {
				break;
			}
		}
		if(up == 1 and down == 1) {
			for(int j = 0; j < n; j++) {
				if(i != j) {
					if(tempY == y[j]) {
						if(tempX > x[j]) {
							left = 1;
						} else if(tempX < x[j]) {
							right = 1;
						}
					}
				}
				if(left == 1 and right == 1) {
					break;
				}
			}
		}
		if(up == 1 and down == 1 and left == 1 and right == 1) {
			count = count + 1; 	
		}
		up = 0;
		down = 0;
		left = 0;
		right = 0;	
	}

	cout << count;

	return 0;
}