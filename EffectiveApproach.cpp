#include <bits/stdc++.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

	int n, q, temp;
	cin >> n;
	int arr[100001];

	for(int i = 0; i < n; i++) {
		cin >> temp;
		arr[temp] = i; 
	}

	cin >> q;

	long long int vasya = 0;
	long long int petya = 0;

	for(int i = 0; i < q; i++) {
		int query;
		cin >> query;
		vasya = vasya + arr[query] +1;
		petya = petya + n - arr[query];
	}

	cout << vasya << " " << petya;

	return 0;
}