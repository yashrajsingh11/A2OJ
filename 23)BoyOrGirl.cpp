#include <iostream>
#include <string>

using namespace std;

int main() {

	string name;
	cin >> name;

	int len = name.length();
	int result = 1;

	for(int i = 1; i < len; i++) {
		int j = 0;
		for(j = 0; j < i; j++) {
			if(name[i] == name[j]) {
				break;
			}
		}
		if(i == j) {
			result = result + 1;
		}
	}

	if(result % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}

	return 0;

}