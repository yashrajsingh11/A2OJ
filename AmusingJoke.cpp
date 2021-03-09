#include <iostream>

using namespace std;

bool compare(string newname, string pile,int len1, int len2) {
	if(len1 != len2) {
		return false;
	}
	for(int i = 0; i < len2; i++) {
		if(newname[i] != pile[i]) {
			return false;
		}
	}
	return true;
}

int main() {

	string name1, name2, pile, newname;
	cin >> name1;
	cin >> name2;
	cin >> pile;
	newname = name1 + name2;

	int len1 = newname.length();
	int len2 = pile.length();

	for(int i = 0; i < len1 - 1; i++) {
		for(int j = i + 1; j < len1; j++) {
			if(newname[i] > newname[j]) {
				char temp = newname[i];
				newname[i] = newname[j];
				newname[j] = temp;
			}
		}
	}

	for(int i = 0; i < len2 - 1; i++) {
		for(int j = i + 1; j < len2; j++) {
			if(pile[i] > pile[j]) {
				char temp = pile[i];
				pile[i] = pile[j];
				pile[j] = temp;
			}
		}
	}

	bool check = compare(newname, pile, len1, len2);

	if(check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}