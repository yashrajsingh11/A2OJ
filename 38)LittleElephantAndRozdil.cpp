#include <iostream>

using namespace std;

int main() {

	int n, check = 1000000001, pos = -1, repeat = 0;
	int distance[100000];
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> distance[i];
	}

	for(int i = 0; i < n; i++) {
		int temp = distance[i];
		if(temp < check) {
			check = temp;
			pos = i + 1;
			repeat = 0;
		} else if(temp == check) {
			repeat = 1;
		}
	}

	if(repeat == 1) {
		cout << "Still Rozdil";
	} else {
		cout << pos;
	}

	return 0;
}