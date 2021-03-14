#include <iostream>

using namespace std;

bool check(int temp[100], int n) {
	for(int i = 0; i < n; i++) {
		if(temp[i] > 0) {
			return true;
		}
	}
	return false;
}

int main() {

	int n, m;
	int arr[100], temp[100];
	cin >> n;
	cin >> m;
	int result = n - 1;
	bool condition = true;

	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while(condition) {
		for(int i = 0; i < n; i++) {
			arr[i] = arr[i] - m;
			if(arr[i] > 0) {
				result = i;
			}
		}
		
		for(int i = 0; i < n; i++) {
			temp[i] = arr[i];
		}

		condition = check(temp, n);

	}

	cout << result + 1;

	return 0;
}