#include <iostream>
using namespace std;

int a[246913];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	while (1) {
		int n;
		cin >> n;
		if (!n) return 0;
		int ans = 0;
		a[1] = 2;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (a[i]) {
				if (a[i] == 1)
					ans++;
				continue;
			}
			for (int j = 2; j * j <= i; j++) {
				if (!(i % j)) {
					a[i] = 2;
					break;
				}
			}
			if (a[i] == 0) {
				ans++;
				a[i] = 1;
			}
		}
		cout << ans << '\n';
	}
}