#include <iostream>

using namespace std;

int main() {

	int n, pagesRead = 0;
	cin >> n;
	int pages[7];

	for(int i = 0; i < 7; i++) {
		cin >> pages[i];
	}

	while(pagesRead < n) {
		for(int i = 0; i < 7; i++) {
			pagesRead = pagesRead + pages[i];
			if(pagesRead >= n) {
				cout << i + 1;
				break;
			}
		}
 	}

	return 0;
}