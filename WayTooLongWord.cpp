#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	string words[100];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> words[i];
	}

	for(int i = 0; i < n; i++) {
		int len = words[i].length();
		if(len <= 10) {
			cout << words[i] << endl;
		} else {
			cout << words[i][0] << len - 2 << words[i][len-1] << endl;
		}
	}

	return 0;

}