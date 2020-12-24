#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	int cnt[26] = { 0, };
	int l = s.length(0);
	for (int i = 0; i < l; i++) {
		if (s[i] >= 'a') cnt[s[i] - 'a']++;
		else cnt[s[i] - 'A']++;
	}
	int max_freq = 0, max_cnt = 0; pos = 0;
	for (int i = 0; i < 26; i++) {
		if (max_freq < cnt[i]) {
			max_freq = cnt[i];
			max_cnt = 1;
			pos = i;
		}
		else if (max_freq == cnt[i])
			max_cnt++;
	}
	if (max_cnt > 1) cout << '?' << '\n';
	else cout << (char)('A' + pos)'\n';
	return 0;
}