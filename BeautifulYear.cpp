#include <iostream>
#include <string>

using namespace std;

bool checker(string syear) {

	for(int j = 0; j < 3; j++) {
		for(int k = j + 1; k < 4; k++) {
			if(syear[j] == syear[k]) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	int year, i = 1;
	cin >> year;

	while(i) {
		year = year + 1;
		string syear = to_string(year);
		if(checker(syear)) {
			cout << syear;
			i = 0;
		}
	}
	return 0;
}