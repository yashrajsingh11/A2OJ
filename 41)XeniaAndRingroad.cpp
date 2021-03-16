#include <iostream>

using namespace std;

int main() {

	long long int n, m, numOfLoops = 0;
	cin >> n;
	cin >> m;
	long long int house[100000];

	for(long long int i = 0; i < m; i++) {
		cin >> house[i];
	}

	for(long long int i = 0; i < m - 1; i++) {
		if(house[i + 1] < house[i]) {
			numOfLoops = numOfLoops + 1;
		}
	}

	long long int result = numOfLoops * n + house[m - 1] - 1;
	cout << result;

	return 0;
}