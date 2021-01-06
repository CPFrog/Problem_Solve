#include <iostream>
using namespace std;

int p[15][15];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 1; i < 15; i++)
		p[0][i] = i;

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++)
			p[i][j] = p[i - 1][j] + p[i][j - 1];
	}

	while (t--) {
		int k, n;
		cin >> k >> n;
		cout << p[k][n] << '\n';
	}
	return 0;
}