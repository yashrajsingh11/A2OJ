#include <iostream>
#include <string>

using namespace std;

int main() {

	int n,t;
	string q;

	cin >> n;
	cin >> t;
	cin >> q;

	string temp = q;
	for(int j = 0; j < t; j++) {
		for(int i = 0; i < n - 1; i++) { 
			if(q[i] == 66 and q[i + 1] == 71) {
				temp[i + 1] = 66;
				temp[i] = 71;
			}
		}
		q = temp;
	}
	cout << temp << endl;
}