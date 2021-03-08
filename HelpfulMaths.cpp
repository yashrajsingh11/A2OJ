#include <iostream>
#include <string>

using namespace std;

int main() {

	string sum;
	cin >> sum;
	int len = sum.length();
	for(int i = 0; i < len - 2; i = i + 2) {
		for(int j = i + 2; j < len; j = j + 2) {
			if(sum[j] < sum[i]) {
				char temp;
				temp = sum[j];
				sum[j] = sum[i];
				sum[i] = temp;
			}
		}
	}

	cout << sum;

	return 0;

}
