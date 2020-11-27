#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, t;
	cin >> t;
	while (t--) {
		cin >> n;
		int score[2][n], d[3][n];
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++)
				cin >> score[i][j];
		}
		d[0][0] = 0;
		d[1][0] = score[0][0];
		d[2][0] = score[1][0];
		for (int i = 1; i < n; i++) {
			d[0][i] = max(max(d[0][i - 1], d[1][i - 1]), d[2][i - 1]);
			d[1][i] = max(d[0][i - 1], d[2][i - 1]) + score[0][i];
			d[2][i] = max(d[0][i - 1], d[1][i - 1]) + score[1][i];
		}
		cout << max(max(d[0][n - 1], d[1][n - 1]), d[2][n - 1]) << '\n';
	}
	return 0;
}