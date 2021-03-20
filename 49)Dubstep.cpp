#include <iostream>
#include <string>

using namespace std;

int main() {

	string dubstep;
	int firstTime = 0;
	cin >>dubstep;

	int n = dubstep.length();

	for(int i = 0; i < n;) {
		if(dubstep[i] == 87 and dubstep[i+1] == 85 and dubstep[i+2] == 66) {
			i = i + 3;
			if(firstTime == 1) {
				cout << " ";
				firstTime = 0;
			}
		} else {
			cout << dubstep[i];
			i = i + 1;
			firstTime = 1;
		}
	}

	return 0;
}