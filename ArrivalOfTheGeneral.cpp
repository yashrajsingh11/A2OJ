#include <iostream>

using namespace std;

int main() {

	int n, tempMin = 1000, minPos = 0, tempMax = 0, maxPos = 0, result;
	int q[100];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> q[i];
	}
	
	for(int i = 0; i < n; i++) {
		if(q[i] > tempMax) {
			tempMax = q[i];
			maxPos = i;
		}
	}
	
	for(int i = 0; i < n; i++) {
		if(q[i] <= tempMin) {
			tempMin = q[i];
			minPos = i;
		}
	}	

	if(maxPos > minPos) {
		result = maxPos + (n - 1 - minPos) - 1;
	} else {
		result = maxPos + (n -1 - minPos);
	}

	cout << result;

	return 0;

}