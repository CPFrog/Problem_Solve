#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int r;
	cin >> r;

	double uclid = r * r * acos(-1);
	double taxi = 2 * r * r;

	cout << fixed;
	cout.precision(6);
	cout << uclid << '\n' << taxi << '\n';
	return 0;
}