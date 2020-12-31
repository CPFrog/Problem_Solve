#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	string o;
	cin >> o;
	while (m--) {
		string s;
		cin >> s;
		int l = s.length();
		int cur = n - 1;
		while (l--) {
			if (s[l] == o[cur]) {
				cur--;
				if (cur < 0) break;
			}
		}
		if (cur < 0) cout << "true\n";
		else cout << "false\n";
	}
	return 0;
}