#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	long long sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i] * (n - 1);
	cout << sum << '\n';
	return 0;
}