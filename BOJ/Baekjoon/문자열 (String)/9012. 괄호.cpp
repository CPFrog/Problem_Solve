#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n, len, valid;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		len = s.length();
		valid = 0;
		for (int i = 0; i < len; i++) {
			if (s.at(i) == '(') valid++;
			else if (s.at(i) == ')') {
				valid--;
				if (valid < 0) break;
			}
		}
		if (valid == 0) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}