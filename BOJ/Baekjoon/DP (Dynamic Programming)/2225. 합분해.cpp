#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	int div = 1000000000;
	int a[n + 1][k + 2];
	for (int i = 0; i <= n; i++)
		a[i][1] = 1;
	for (int j = 2; j <= k + 1; j++) {
		a[0][j] = 1;
		for (int i = 1; i <= n; i++) {
			a[i][j] = (a[i - 1][j] + a[i][j - 1]) % div;
		}
	}
	cout << a[n][k] % div << '\n';
	return 0;
}