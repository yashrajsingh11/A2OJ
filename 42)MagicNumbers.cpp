#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	int i = 0,temp = 0;
	cin >> s;
	int n = s.length();

	if(s[0] != 49) {
		temp = 0;
	} else {
		for(i = 0; i < n;) {
			if(s[i] == 49 and s[i+1] == 52 and s[i + 2] == 52) {
				i = i + 3;
			} else if(s[i] == 49 and s[i+1] == 52) {
				i = i + 2;
			} else if(s[i] == 49) {
				i = i + 1;
			} else {
				temp = 0;
				break;
			}
		}
	}

	if(i == n) {
		temp = 1;
	}

	if(temp == 0) {
		cout << "NO";
	} else {
		cout << "YES";
	}

	return 0;
}