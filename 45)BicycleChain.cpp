#include <iostream>

using namespace std;

int main() {

	int n,m;
	int nArray[50];
	int mArray[50];
	int maxCount = 0, max = 0;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> nArray[i];
	}

	cin >> m;
	for(int i = 0; i < m; i++) {
		cin >> mArray[i];
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(mArray[j] % nArray[i] == 0) {
				int tempMax = mArray[j]/nArray[i];
				if(tempMax == max) {
					maxCount = maxCount + 1;
				} else if(tempMax > max) {
					maxCount = 1;
					max = tempMax;
				}
			}
		}
 	}

 	cout << maxCount;

	return 0;
}