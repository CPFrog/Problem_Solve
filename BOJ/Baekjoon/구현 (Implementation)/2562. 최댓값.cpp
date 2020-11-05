#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int d, max = 0, mnc;
	for (int i = 0; i < 9; i++) {
		cin >> d;
		if (d > max) {
			max = d;
			mnc = i + 1;
		}
	}
	cout << max << '\n' << mnc << '\n';
	return 0;
}