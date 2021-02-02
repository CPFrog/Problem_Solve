#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll k = (ll)pow(256, 7);
		if (n == 1) {
			ll ans = 0;
			for (int i = 0; i < 8; i++) {
				int d;
				cin >> d;
				if (i < 7) {
					ans += d * k;
					char dot;
					cin >> dot;
					k /= 256;
				}
				else ans += d;
			}
			cout << ans << '\n';
		}
		else {
			ll d;
			cin >> d;
			for (int i = 0; i < 8; i++) {
				cout << d / k;
				if (i < 7) cout << '.';
				else cout << '\n';
				d %= k;
				k /= 256;
			}
		}
	}
	return 0;
}