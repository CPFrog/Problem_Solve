#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int ans = -210000000;
	sort(a, a + n);
	do {
		int total = 0;
		for (int i = 0; i < n - 1; i++)
			total += abs(a[i] - a[i + 1]);
		if (ans < total) ans = total;
	} while(next_permutation(a, a + n));
	cout << ans << '\n';
	return 0;
}