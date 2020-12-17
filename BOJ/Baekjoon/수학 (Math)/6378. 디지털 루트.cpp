#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true) {
		string n;
		cin >> n;
		if (n == "0") return 0;
		int ans = 0;
		int nl = n.length();
		for (int i = 0; i < nl; i++)
			ans += n[i] - '0';
		if (ans > 9) {
			while (true) {
				int l = ans;
				ans = 0;
				while (l > 0) {
					ans += l % 10;
					l /= 10;
				}
				if (ans < 10) break;
			}
		}
		cout << ans << '\n';
	}
}