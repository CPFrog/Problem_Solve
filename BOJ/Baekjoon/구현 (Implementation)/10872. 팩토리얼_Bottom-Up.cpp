#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	long long ans = 1;
	cin >> n;
	if (n == 0 || n == 1) cout << 1 << '\n';
	else {
		for (int i = 2; i <= n; i++) ans *= i;
		cout << ans << '\n';
	}
	return 0;
}