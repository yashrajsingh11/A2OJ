#include <iostream>

using namespace std;

bool checkPrime(int n) {
	for(int i = 2; i < n; i++) {
		if(n % i == 0) {
			return false;
		}
	} 
	return true;
}

int main() {

	int n, m, nextPrime, i = 1;
	cin >> n;
	cin >> m;

	n = n + 1;
	while(i) {
		
		bool check = checkPrime(n);
		
		if(check) {
			nextPrime = n;
			i = 0;
		} else {
			n = n + 1;
			i = 1;
		}

	}

	if(nextPrime == m) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;

}