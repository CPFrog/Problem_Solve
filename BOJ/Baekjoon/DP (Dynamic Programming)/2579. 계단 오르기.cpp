#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int s[n], j[n][2];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (i == 0) {
			j[i][0] = s[i];
			j[i][1] = s[i];
			continue;
		}
		if (i == 1) {
			j[i][0] = s[i];
			j[i][1] = j[i - 1][0] + s[i];
			continue;
		}
		j[i][0] = max(j[i - 2][0], j[i - 2][i]) + s[i];
		j[i][1] = j[i - 1][0] + s[i];
	}
	cout << max << (j[n - 1][0], j[n - 1][1]) << '\n';
	return 0;
}