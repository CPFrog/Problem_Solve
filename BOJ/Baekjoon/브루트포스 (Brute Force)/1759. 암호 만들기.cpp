#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int l, c;
	cin >> l >> c;

	char a[c];
	int chk[c], vow[c];
	for (int i = 0; i < c; i++) {
		cin >> a[i];
		if (i < l) chk[i] = 1;
		else chk[i] = 0;
	}
	sort(a, a + c);

	for (int i = 0; i < c; i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			vow[i] = 1;
		else vow[i] = 0;
	}

	do {
		vector<char> v;
		int vc = 0, cc = 0;
		for (int i = 0; i < c; i++) {
			if (chk[i] == 1) {
				v.push_back(a[i]);
				if (vow[i] == 1) vc++;
				else cc++;
			}
		}
		if (vc > 0 && cc > 1) {
			for (int i = 0; i < l; i++)
				cout << v[i];
			cout << '\n';
		}
	} while (prev_permutation(chk, chk + c));
	return 0;
}