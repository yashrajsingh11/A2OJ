#include <iostream>

using namespace std;

int main() {

	int arr[3][3];
	int result[3][3];
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}

	result[0][0] = arr[0][0] + arr[0][1] + arr[1][0];
	result[1][0] = arr[1][0] + arr[2][0] + arr[0][0] + arr[1][1];
	result[2][0] = arr[2][0] + arr[2][1] + arr[1][0];
	result[0][1] = arr[0][1] + arr[0][0] + arr[0][2] + arr[1][1];
	result[1][1] = arr[1][1] + arr[0][1] + arr[1][0] + arr[2][1] + arr[1][2];
	result[2][1] = arr[2][1] + arr[1][1] + arr[2][2] + arr[2][0];
	result[0][2] = arr[0][2] + arr[0][1] + arr[1][2];
	result[1][2] = arr[1][2] + arr[0][2] + arr[1][1] + arr[2][2];
	result[2][2] = arr[2][2] + arr[2][1] + arr[1][2];

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(result[i][j] % 2 == 0) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << endl;
	}
}