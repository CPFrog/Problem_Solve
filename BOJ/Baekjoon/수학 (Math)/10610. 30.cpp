#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	vector<int> v;
	int l = s.length();

	int sum = 0;
	int zero = 0;
	for (int i = 0; i < l; i++) {
		int n = s[i] - '0';
		if (n == 0) {
			zero++;
			continue;
		}
		v.push_back(n);
		sum += n;
	}
	if (sum % 3 != 0 || zero == 0)
		cout << -1 << '\n';
	else {
		sort(v.begin(), v.end());
		l = v.size();
		while (l--) cout << v[l];
		while (zero--) cout << 0;
		cout << '\n';
	}
	return 0;
}