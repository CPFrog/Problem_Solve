#include <iostream>
#define IM -2147483648
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m = IM;
	cin >> n;
	int a[n], d[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		d[i] = a[i];

		if (i == 0) {
			m = d[0];
			continue;
		}

		if (d[i] < d[i - 1] + a[i])
			d[i] = d[i - 1] + a[i];
		if (m < d[i]) m = d[i];
	}
	cout << m << '\n';
	return 0;
}