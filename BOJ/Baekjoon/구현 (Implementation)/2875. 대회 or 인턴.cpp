#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int m, n, k;
	cin >> n >> m >> k;

	int gt = n / 2;
	int left;
	if (gt > m) {
		left = n - m * 2;
		n -= left;
	}
	else {
		left = m - gt;
		left += n % 2;
		m = gt;
		n = m * 2;
	}
	k -= left;
	if (k > 0) {
		for (int i = 0; i < k; i++) {
			if (i % 3 == 2) m--;
			else n--;
		}
	}
	cout << min(n / 2, m) << '\n';
	return 0;
}