#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		int sl = s.length();
		for (int j = 0; j < sl; j++) {
			s[j]++;
			if (s[j] > 'Z') s[j] = 'A';
		}
		cout << "String #" << i << '\n' << s << '\n';
		if (i < n) cout << '\n';
	}
	return 0;
}