#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string num;
	int count = 0;
	cin >> num;
	int len = num.length();

	for(int i = 0; i < len; i++) { 
		if(num[i] == 52 || num[i] == 55) {
			count = count + 1;
		}
	}

	if(count == 4 || count == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}