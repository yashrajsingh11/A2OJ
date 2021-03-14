#include <iostream>

using namespace std;

int main() {
	
	int n;
	int a[1000], b[1000];
	cin >> n;
	int temp = 0, result = 0;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
		cin >> b[i];
	}

	for(int i = 0; i < n; i++) {
		temp = temp - a[i] + b[i];
		if(temp > result) {
			result = temp;
		}
	}

	cout << result;

	return 0;
}