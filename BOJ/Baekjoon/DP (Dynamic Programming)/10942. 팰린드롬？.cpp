#include <iostream>
using namespace std;

int a[2001];
bool b[2001][2001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[i][i] = 1;
		if (a[i - 1] == a[i]) b[i - 1][i] = 1;
	}
	int t;
	cin >> t;
	for (int d = 3; d <= n; d++) {
		for (int i = 1; i <= n - d + 1; i++) {
			int j = i + d - 1;
			if (a[i] == a[j] && b[i + 1][j - 1]) b[i][j] = 1;
		}
	}
	while (t--) {
		int s, e;
		cin >> s >> e;
		cout << b[s][e] << '\n';
	}
	return 0;
}