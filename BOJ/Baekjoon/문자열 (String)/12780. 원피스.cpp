#include <iostream>
#include <vector>
using namespace std;

vector<int> preprocess(string n) {
	int l = n.size();
	vector<int> v(l);
	v[0] = 0;
	int j = 0;
	for (int i = 1; i < l; i++) {
		while (j > 0 && n[i] != n[j])
			j = v[j - 1];
		if (n[i] == n[j]) {
			v[i] = j + 1;
			j++;
		}
		else v[i] = 0;
	}
	return v;
}

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);

	string h, n;
	cin >> h >> n;

	vector<int> pi = preprocess(n);

	int j = 0, l = h.size(), ans = 0;
	for (int i = 0; i < l; i++) {
		while (j > 0 && h[i] != n[j])
			j = pi[j - 1];
		if (h[i] == n[j]) {
			j++;
			if (j == n.length()) {
				ans++;
				j = 0;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}