#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[5001];
	a[0] = a[1] = a[2] = a[4] = 0;
	a[3] = a[5] = 1;

	for (int i = 6; i <= n; i++) {
		a[i] = 2147483647;
		if (a[i - 3] != 0 && a[i - 3] + 1 < a[i]) a[i] = a[i - 3] + 1;
		if (a[i - 5] != 0 && a[i - 5] + 1 < a[i]) a[i] = a[i - 5] + 1;
		if (a[i] == 2147483647) a[i] = 0;
	}
	if (a[n] == 0) cout << -1 << '\n';
	else cout << a[n] << '\n';
	return 0;
}