#include <iostream>

using namespace std;

int main() {

	int arr[5][5];

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> arr[i][j];
		}
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if(arr[i][j] != 0) {
				cout << (abs(3 - (i + 1)) + abs(3 - (j + 1)));
			}
		}
	}

}