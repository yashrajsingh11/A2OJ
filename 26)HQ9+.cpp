#include <iostream>
#include <string>

using namespace std;

bool check(string expression, int n) {
	for(int i = 0; i < n; i++) {
		if(expression[i] == 72 || expression[i] == 81 || expression[i] == 57) {
			return true;
		}
	}
	return false;
}

int main() {

	string expression;
	int n;
	cin >> expression;
	n = expression.length();

	bool result = check(expression, n);
	if(result) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
