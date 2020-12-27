#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n < 100) cout << n << '\n';
	else {
		int ans = 99;
		for (int i = 100; i <= n; i++) {
			if (i / 100 - (i % 100) / 10 == (i % 100) / 10 - i % 10)
				ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}