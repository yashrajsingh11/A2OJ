#include <iostream>
#include <string>

using namespace std;

int compare(string string1, string string2, int n) {
	for(int i = 0; i < n; i++) {
		if(string1[i] >= 65 and string1[i] <= 90) {
         		string1[i] = string1[i] + 32;
      		}
      	if(string2[i] >= 65 and string2[i] <= 90) {
         		string2[i] = string2[i] + 32;
      		}
		if(string1[i] > string2[i]) {
			return 1;
		} else if(string1[i] < string2[i]) {
			return -1;
		}
	}
	return 0;
}

int main() {

	string string1, string2;
	cin >> string1;
	cin >> string2;
	int n = string1.length();

	int result =  compare(string1, string2, n);
	cout << result;

	return 0;
}