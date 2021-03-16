#include <iostream>
#include <string>
using namespace std;

int main() {

	string s, t;
	cin >> s;
	cin >> t;
	int temp = 0, i = 0;
	int sLength = s.length();
	int tLength = t.length();

	if(sLength != tLength) {
		temp = 0;
	} else {
		for(i = 0; i < sLength; i++) {
			if(s[i] != t[sLength - i - 1]) {
				temp = 0;
				break;
			}
		}
	}

	if(i == sLength) {
		temp = 1;
	}

	if(temp == 0) {
		cout << "NO";
	} else {
		cout << "YES";
	}

	return 0;
}