#include <iostream>

using namespace std;

int main() {
	
	int n, leftOpen = 0, leftClosed = 0, rightOpen  = 0, rightClosed = 0, result = 0;
	int l[10000];
	int r[10000];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> l[i];
		cin>> r[i];
	}

	for(int i = 0; i < n; i++) {
		if(l[i] == 0) {
			leftClosed = leftClosed + 1;
		} else {
			leftOpen = leftOpen + 1;
		}
		if(r[i] == 0) {
			rightClosed = rightClosed + 1;
		} else {
			rightOpen = rightOpen + 1;
		}
	} 

	if(leftClosed >= leftOpen) {
		result = result + leftOpen;
	} else {
		result = result + leftClosed;
	}

	if(rightClosed >= rightOpen) {
		result = result + rightOpen;
	} else {
		result = result + rightClosed;
	}

	cout << result;

	return 0;

}