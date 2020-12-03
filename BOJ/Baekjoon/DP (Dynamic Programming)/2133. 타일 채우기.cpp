#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n % 2 == 1) {
		cout << 0 << '\n';
		return 0;
	}
	int a[n / 2 + 1];
	a[0] = 1;
	a[1] = 3;
	for (int i = 2; i <= n; i++) {
		a[i] = 3 * a[i - 1];
		for (int j = i - 2; j. = 0; j--)
			a[i] += a[j] * 2;
	}
	cout << a[n / 2] << '\n';
	return 0;
}