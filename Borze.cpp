#include <iostream>
#include <string>

using namespace std;

int main() {

	string expression;
	cin >> expression;
	int length = expression.length();
	
	for(int i = 0; i < length;) {
		
		if(expression[i] == 45) {
			if(expression[i + 1] == 46) {
				cout << "1";
				i = i + 2;
			} else if(expression[i + 1] == 45 ) {
				cout << "2";
				i = i + 2;
			}
		} else if(expression[i] == 46) {
			cout << "0";
			i = i + 1; 
		}
	}

}