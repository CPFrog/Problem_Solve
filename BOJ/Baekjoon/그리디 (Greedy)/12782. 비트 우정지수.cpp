#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int l = s1.length();
		int d0 = 0, d1 = 0;
		for (int i = 0; i < l; i++) {
			if (s1[i] != s2[i]) {
				if (s1[i] - '0') d1++;
				else d0++;
			}
		}
		cout << (d0 > d1 ? d0 : d1) << '\n';
	}
	return 0;
}