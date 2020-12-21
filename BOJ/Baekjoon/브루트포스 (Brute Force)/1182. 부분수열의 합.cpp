#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, d;
	cin >> n >> d;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = 0;
	for (int i = 1; i < (1 << n); i++) {
		int sum = 0;
		for (int k = 0; k < n; k++) {
			if (i & (1 << k))
				sum += a[k];
		}
		if (sum == d) ans += 1;
	}
	cout << ans << '\n';
	return 0;
}