#include <iostream>
using namespace std;

int d[1001][1001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int r, c;
	cin >> r >> c;

	int a;
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			cin >> a;
			d[i][j] = max(d[i - 1][j], d[i][j - 1]) + a;
		}
	}

	cout << d[r][c] << '\n';
	return 0;
}