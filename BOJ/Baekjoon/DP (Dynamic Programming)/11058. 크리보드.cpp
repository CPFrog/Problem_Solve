#include <iostream>
using namespace std;

long long d[101];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	d[1] = 1;
	d[2] = 2;
	d[3] = 3;
	int n;
	cin >> n;
	for (int i = 4; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		for (int j = 1; j <= i - 2; j++) {
			if (d[i - 2 - j] * (j + 1) > d[i])
				d[i] = d[i - j - 2] * (j + 1);
		}
	}
	cout << d[n] << '\n';
	return 0;
}