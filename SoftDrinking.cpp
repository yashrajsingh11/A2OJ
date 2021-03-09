#include <iostream>

using namespace std;

int main() {

	int numOfFriends, numOfBottles, capOfEachBottle,totalCap, numOfLimes, numOfSlices, totalSlices, totalSalt, reqCap, reqSalt;
	int cap, slices, salt;
	cin >> numOfFriends;
	cin >> numOfBottles;
	cin >> capOfEachBottle;
	cin >> numOfLimes;
	cin >> numOfSlices;
	cin >> totalSalt;
	cin >> reqCap;
	cin >> reqSalt;

	totalCap = numOfBottles * capOfEachBottle;
	totalSlices = numOfLimes * numOfSlices;
	cap = totalCap/reqCap;
	slices = totalSlices;
	salt = totalSalt/reqSalt;

	cout << min( min(cap, slices), salt)/numOfFriends;

	return 0;
}