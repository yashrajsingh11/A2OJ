#include <iostream>
#include <string>

using namespace std;

int main() {

	int t, count = 0;
	string sequence;

	cin >> t;
	cin >> sequence;

	for(int i = 0; i < t-1; i++) {
		if(sequence[i] == sequence[i+1]) {
			count = count + 1;
		}
	}

	cout << count;

	return 0;

}