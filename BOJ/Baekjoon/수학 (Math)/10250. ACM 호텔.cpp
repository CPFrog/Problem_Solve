#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int h, w, n;
		cin >> h >> w >> n;
		int r = (n % h == 0 ? n / h : n / h + 1);
		int f = (n % h == 0 ? h : n % h);
		if (r <= 9) cout << f << 0 << r << '\n';
		else cout << f << r << '\n';
	}
	return 0;
}