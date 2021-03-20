#include <iostream>
#include <string>
using namespace std;

bool check(string text, int k, int n) {
	for(int i = 0; i < n; i = i + k) {
		for(int j = i; j < i + k; j++) {
			if(text[i] != text[j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	int k, count = 0;
	bool myCheck;
	string text;
	string result;
	cin >> k;
	cin >> text;
	result = text;
	int n = text.length();

	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(text[i] > text[j]) {
				char temp = text[i];
				text[i] = text[j];
				text[j] = temp;
			}
		}
	}

	myCheck = check(text, k, n);

	if(myCheck) {
		for(int i = 0; i < k; i++) {
			for(int j = i; j < n; j = j + k) {
				result[count] = text[j];
				count = count + 1;
			}
		}
		cout << result;
	} else {
		cout << -1;
	}

	return 0;
}