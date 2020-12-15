#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++) {
		a[i - 1] = i;
		cout << i << ' ';
	}
	cout << '\n';

	while (next_permutation(a, a + n)) {
		for (int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << '\n';
	}
	return 0;
}