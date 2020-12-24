#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	getline(cin, s);
	int l = s.length();
	int ans = 0;
	if (s == ' ') {
		cout << 0 << '\n';
		return 0;
	}
	for (int i = 0; i < l; i++) {
		if (i == 0 && s[i] == ' ') continue;
		if (i == l - 1 && s[i] == ' ') continue;
		if (s[i] == ' ') ans++;
	}
	cout << ans + 1 << '\n';
	return 0;
}