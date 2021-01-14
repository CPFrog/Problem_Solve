#include <iostream>
using namespace std;

int a[1000000];
long long d[1000001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] %= m;
	}

	d[0] = 1;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		sum %= m;
		d[sum] += 1;
	}

	long long ans = 0;
	for (int i = 0; i < m; i++)
		ans += (long long)d[i] * (long long)(d[i] - 1) / 2LL;

	cout << ans << '\n';
	return 0;
}