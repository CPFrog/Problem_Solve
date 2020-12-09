#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int l = s.length();
		int suc = 0, p = 0;
		for (int i = 0; i < l; i++) {
			if (s[i] == 'O') {
				suc++;
				p += suc;
			}
			else suc = 0;
		}
		cout << p << '\n';
	}
	return 0;
}