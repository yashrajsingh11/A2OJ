#include <iostream>
#include <string>

using namespace std;

int main() {

	int n, count = 0;
	cin >> n;
	string operation[150];

	for(int i = 0; i < n; i++) {
		cin >> operation[i];
	}

	for(int i = 0 ; i < n; i++) {
		for(int j = 0; j < 3; j++) {
			if(operation[i][j] == '+') {
				count = count + 1;
				break;
			} else if(operation[i][j] == '-') {
				count = count - 1;
				break;
			}
		}
	}

	cout << count;

	return 0;
}