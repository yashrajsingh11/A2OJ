#include <iostream>
#include <math.h>

using namespace std;

int main() {

	float xy, yz, xz;
	cin >> xy;
	cin >> yz;
	cin >> xz;

	float temp = xy * yz * xz;
	temp = sqrt(temp);

	xy = temp/xy;
	yz = temp/yz;
	xz = temp/xz;

	int result = (xy + yz + xz) * 4;
	cout << result;

	return 0;
}