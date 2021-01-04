#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	int ans;
	if (n == 1) ans = 1;
	else if (n == 2) ans = min(4, (m + 1) / 2);
	else {
		if (m >= 7) ans = m - 2;
		else ans = min(4, m);
	}
	cout << ans << '\n';
	return 0;
}