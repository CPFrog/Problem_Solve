#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int t = n;
	int ans = 0;
	for (int i = 0;; i++) {
		if (t / 10 != 0) {
			ans += 9 * pow(10, i) * (i + 1);
			t /= 10;
		}
		else {
			n -= pow(10, i);
			ans += (i + 1) * (n + 1);
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}