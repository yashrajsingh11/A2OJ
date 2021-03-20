#include <iostream>

using namespace std;

int main() {

	int n, m, earnings = 0;
	int tvSets[100];

	cin >> n;
	cin >> m;
	for(int i = 0; i < n; i++) {
		cin >> tvSets[i];
	}	

	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(tvSets[i] > tvSets[j]) {
				int temp = tvSets[i];
				tvSets[i] = tvSets[j];
				tvSets[j] = temp;
			}
		}
	}

	for(int i = 0; i < m; i++) {
		if(tvSets[i] < 0) {
			earnings = earnings + tvSets[i];
		} else if(tvSets > 0) {
			break;
		}
	} 

	cout << abs(earnings);

	return 0;
}