#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	int ans = 0;
	for (int a = 1; a < n; a++) {
		for (int b = a; b < n - a; b++) {
			int c = n - a - b;
			if (b > c) break;
			if (a + b > c) ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}