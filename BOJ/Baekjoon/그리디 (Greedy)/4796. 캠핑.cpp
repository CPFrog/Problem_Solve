#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	for (int i = 1;; i++) {
		int l, p, v;
		cin >> l >> p >> v;
		if (!l && !p && !v) return 0;
		int ans = (v / p) * l;
		int r = v % p;
		if (r <= l) ans += r;
		else ans += l;
		cout << "Case " << i << ": " << ans << '\n';
	}
}