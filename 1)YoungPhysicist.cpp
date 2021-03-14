#include <iostream>

using namespace std;

int main() {
	
	int num;
	cin >> num;

	int x[100];
	int y[100];
	int z[100];

	for(int i = 0; i < num; i++) {
		cin >> x[i];
		cin >> y[i];
		cin >> z[i];
	}

	int xSum = 0, ySum = 0, zSum = 0;

	for(int i = 0; i < num; i++) {
		xSum = xSum + x[i];
		ySum = ySum + y[i];
		zSum = zSum + z[i];
	}

	if(xSum == 0 and ySum == 0 and zSum == 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}