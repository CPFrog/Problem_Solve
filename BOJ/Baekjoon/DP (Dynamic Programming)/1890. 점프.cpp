#include <iostream>
using namespace std;

long long d[100][100];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	d[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int m;
			cin >> m;
			if (m == 0) continue;
			if (i + m < n) d[i + m][j] += d[i][j];
			if (j + m < n) d[i][j + m] += d[i][j];
		}
	}
	cout << d[n - 1][n - 1] << '\n';
	return 0;
}