#include <iostream>
#include <string>

using namespace std;

int main() {

	int uppercase = 0, lowercase = 0;
	string word;
	cin >> word;

	for(int i = 0; i < word.length(); i++) {
		if(word[i] >= 65 and word[i] <= 90) {
			uppercase = uppercase + 1;
		} else if (word[i] >= 97 and word[i] <= 122) {
			lowercase = lowercase + 1;
		}
	}

	if(uppercase > lowercase) {
		for(int i = 0; i <= word.length(); i++) {
      		if(word[i] >= 97 and word[i] <= 122) {
         		word[i] = word[i] - 32;
      		}
   		}
	} else if(uppercase <= lowercase) {
		for(int i = 0; i <= word.length(); i++) {
      		if(word[i] >= 65 and word[i] <= 90) {
         		word[i] = word[i] + 32;
      		}
   		}
	}

	cout << word;

}