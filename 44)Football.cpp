#include <iostream>
#include <string>

using namespace std;

int main() {

	string s[100];
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	string teamA = s[0];
	string teamB;
	int goalsA = 1;
	int goalsB = 0;
	int temp = 0;

	for(int i = 1; i < n; i++) {
		
		if(s[i] == s[i - 1]) {
		
			if(temp == 0) {
		
				goalsA = goalsA + 1;
		
			} else {
		
				teamB = s[i];
				goalsB = goalsB + 1;
		
			}
		
		} else {
		
			if(temp == 0) {
		
				teamB = s[i];
				goalsB = goalsB + 1;
				temp = 1;
		
			} else {

				goalsA = goalsA + 1;
				temp = 0;
		
			}
		
		}
	
	}

	if(goalsA > goalsB) {
		cout << teamA;
	} else {
		cout << teamB;
	}

	return 0;
}