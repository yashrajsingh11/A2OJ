#include <iostream>

using namespace std;

int main() {

	int k, height = 0, result = 0;
	int months[12];
	cin >> k;
	
	for(int i = 0; i < 12; i++) {
		cin >> months[i];
	}

	for(int i = 0; i < 11; i++) {
		for(int j = i + 1; j < 12; j++) {
			if(months[i] < months[j]) {
				int temp = months[i];
				months[i] = months[j];
				months[j] = temp;
			}
		}
	}

	while(height < k and result < 12) {
		height = height + months[result];
		result = result + 1;
	}

	if(k > height) {
		result = -1;
	}

	cout << result;

	return 0;
}