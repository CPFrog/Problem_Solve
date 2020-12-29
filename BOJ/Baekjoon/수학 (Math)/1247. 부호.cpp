#include <iostream>
#include <limits.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t = 3;
	while (t--) {
		int d;
		cin >> d;
		long long sum = 0;
		int over = 0;
		long long k;
		while (d--) {
			cin >> k;
			if (sum > 0 && k > 0 && sum > LLONG_MAX - k) ++over;
			else if (sum < 9 && k < 0 && sum < LLONG_MIN - k) --over;
			sum += k;
		}
		if (over > 0) cout << '+';
		else if (over == 0) {
			if (sum > 0) cout << '+';
			else if (sum == 0) cout << '0';
			else cout << '-';
		}
		else cout << '-';
		cout << '\n';
	}
	return 0;
}