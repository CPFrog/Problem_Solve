#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n[8];
	cin >> n[0];
	int res = 1;
	for (int i = 1; i < 8; i++) {
		cin >> n[i];
		if (res) {
			if (n[i] > n[i - 1]) {
				if (res == 2) res = 0;
				else res = 3;
			}
			else if (n[i] < n[i - 1]) {
				if (res == 3) res = 0;
				else res = 2;
			}
			else res = 0;
		}
	}
	string ans;
	if (!res) ans = "mixed";
	else if (res == 2) ans = "descending";
	else ans = "ascending";

	cout << ans << '\n';
	return 0;
}