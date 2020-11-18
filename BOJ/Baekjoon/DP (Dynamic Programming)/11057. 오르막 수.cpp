#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	int c[1001][10];
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 1 || j == 0) c[i][j] = 1;
			else c[i][j] = (c[i - 1][j] + c[i][j - 1]) % 10007;
		}
	}
	int ans = 0;
	for (int i = 0; i < 10; i++) ans += c[n][i];
	cout << ans % 10007 << '\n';
	return 0;
}