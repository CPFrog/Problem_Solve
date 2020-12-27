#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = 0;
	for (int start = 0; start < n; start++) {
		int sum = 0;
		for (int i = start; i < n; i++) {
			sum += a[i];
			if (sum >= m) {
				if (sum == m) ans++;
				else break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}