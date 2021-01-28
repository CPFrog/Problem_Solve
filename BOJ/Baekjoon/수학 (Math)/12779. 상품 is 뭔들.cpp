#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	ll a, b;
	cin >> a >> b;
	ll d = b - a;
	int ans = 0;
	for (ll i = sqrt(a) + 1; i * i <= b; i++)
		ans++;
	if (!ans) cout << ans << '\n';
	else {
		ll g = gcd(d, ans);
		d /= g;
		ans /= g;
		cout << ans << '/' << d << '\n';
	}
	return 0;
}