#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	int sum = 0;
	while (k--) {
		int h;
		cin >> h;
		sum += h / 2;
		if (h % 2 == 1) sum++;
	}
	if (sum >= n) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}