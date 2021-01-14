#include <iostream>
using namespace std;

int a[100000];
long long d[100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		d[i] = d[i - 1] + a[i - 1];

	while (m--) {
		int x, y, ans;
		cin >> x >> y;
		if (x == y)
			ans = a[x - 1];
		else ans = d[y] - d[x - 1];

		cout << ans << '\n';
	}
	return 0;
}