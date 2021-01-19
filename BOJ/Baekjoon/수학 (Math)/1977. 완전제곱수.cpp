#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	int rn, min;
	int sum = 0;
	for (int i = 1;; i++) {
		if (i * i >= n) {
			rn = i;
			min = i * i;
			break;
		}
	}
	for (int i = rn; i * i <= m; i++)
		sum += i * i;
	if (sum == 0)
		cout << -1 << '\n';
	else cout << sum << '\n' << min << '\n';
	return 0;
}