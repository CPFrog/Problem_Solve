#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	bool c[26];
	string s;
	int ans = n;
	while (n--) {
		cin >> s;
		int l = s.length();
		if (l > 1) {
			memset(c, 0, sizeof(c));
			c[s[0] - 'a'] = 1;
			for (int i = 1; i < l; i++) {
				if (s[i - 1] != s[i]) {
					if (c[s[i] - 'a']) {
						ans--;
						break;
					}
					else c[s[i] - 97] = 1;
				}
			}
		}
	}
	cout << ans << '\n';
	return 0;
}