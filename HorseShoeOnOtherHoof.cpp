#include <iostream>

using namespace std;

int main() {

	int hoof[4];

	for(int i = 0; i < 4; i++) {
		cin >> hoof[i];
	}

	int result = 1;

	for (int i = 1; i < 4; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (hoof[i] == hoof[j])
                break;
 
        if (i == j)
            result = result + 1;
    }
    
    cout << 4 - result;

	return 0;
}