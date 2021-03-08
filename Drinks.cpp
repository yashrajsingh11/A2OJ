#include <iostream>

using namespace std;

int main() {

	float n, sum = 0;
	float average;
	int drinks[100];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> drinks[i];
	}

	for(int i = 0; i < n; i++) {
		sum = sum + drinks[i];
	}

	average = sum/n;
	cout << average;

	return 0;

}