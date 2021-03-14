#include <iostream>

using namespace std;

int main() {

	long long int n, k, oddResult = -1, evenResult = 0;
	cin >> n;
	cin >> k;

	long long int numOdd = n - n/2;

	if(k <= numOdd) {
		for(long long int i = 0; i < k; i++) {
			oddResult = oddResult + 2;
		} 
		cout << oddResult;
	} else {
		for(long long int i = numOdd; i < k; i++) {
			evenResult = evenResult + 2;
		}
		cout << evenResult;
	}

	return 0;
}