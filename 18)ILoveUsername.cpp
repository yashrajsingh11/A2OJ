#include <iostream>

using namespace std;

int main() {

	int n, count = 0;
	int points[1000];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> points[i];
	}

	int highest = points[0], lowest = points[0];
	
	for(int i = 1; i < n; i++) {
		if(points[i] > highest) {
			highest = points[i];
			count = count + 1;
		}
		if(points[i] < lowest) {
			lowest = points[i];
			count = count + 1;
		}
	}

	cout << count;

	return 0;

}