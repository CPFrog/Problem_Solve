#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int min = 1000000, max = -1000000;
		int n;
		cin >> n;
		int d;
		while (n--) {
			cin >> d;
			if (d < min) min = d;
			if (d > max) max = d;
		}
		cout << min << ' ' << max << '\n';
	}
	return 0;
}