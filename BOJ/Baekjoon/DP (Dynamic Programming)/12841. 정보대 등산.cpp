#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> cross(n);
	vector<int> l(n), r(n);
	ll lsum = 0, rsum = 0;
	l[0] = 0, r[0] = 0;
	for (int i = 0; i < n; i++)
		cin >> cross[i];
	for (int i = 1; i < n; i++)
		cin >> l[i];
	for (int i = 1; i < n; i++) {
		cin >> r[i];
		rsum += r[i];
	}
	ll Min = lsum + cross[0] + rsum;
	int ans = 1;
	for (int i = 1; i < n; i++) {
		lsum += l[i];
		rsum -= r[i];
		ll sum = lsum + cross[i] + rsum;
		if (sum < Min) {
			Min = sum;
			ans = i + 1;
		}
	}
	cout << ans << ' ' >> Min << '\n';
	return 0;
}