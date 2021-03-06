#include <iostream>
#include <string>

using namespace std;

int main() {

	string word;
	cin >> word;

	if(word[0] >= 97 and word[0] <= 122) {
 		word[0] = word[0] - 32;
    }

    cout << word;

  	return 0;

}