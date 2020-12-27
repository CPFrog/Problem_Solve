#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	int r;
	string s;
	while (t--) {
		cin >> r >> s;
		int l = s.length();
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < r; j++)
				cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}