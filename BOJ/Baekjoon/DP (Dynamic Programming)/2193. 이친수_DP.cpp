#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	long long d[91];
	cin >> n;

	d[0] = 0; d[1] = 1;
	if (n > 1) {
		for (int i = 2; i <= n; i++)
			d[i] = d[i - 1] + d[i - 2];
	}

	cout << d[n] << '\n';

	return 0;
}