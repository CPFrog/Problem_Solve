#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	bool broken[10] = { false, };
	int d, n;
	cin >> d >> n;
	while (n--) {
		int loc;
		cin >> loc;
		broken[loc] = true;
	}
	int ans = abs(d - 100);
	for (int i = 0; i < 1000000; i++) {
		if (i == 0) {
			if (broken[0]) continue;
			else ans = min(ans, 1 + d);
		}
		else {
			int l = 0, t = i;
			while (t > 0) {
				if (broken[t % 10]) break;
				l++;
				t /= 10;
			}
			if (t == 0) 
				ans = min(ans, l + abs(i - d));
		}
	}
	cout << ans << '\n';
	return 0;
}