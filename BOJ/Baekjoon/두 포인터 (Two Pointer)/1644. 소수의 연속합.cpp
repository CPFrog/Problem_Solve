#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n == 1) {
		cout << 0 << '\n';
		return 0;
	}
	
	bool c[n + 1];
	for (int i = 2; i <= n; i++) c[i] = 0;
	vector<int> v;
	for (int i = 2; i <= n; i++) {
		if (c[i] == 0) {
			v.push_back(i);
			for (int j = i * 2; j <= n; j += i)
				c[j] = 1;
		}
	}

	int start = 0, end = 0;
	int sum = v.front();
	int l = v.size();
	int ans = 0;
	while (start < l) {
		if (sum <= n) {
			if (sum == n) ans++;
			if (end < l - 1) sum += v[++end];
			else sum -= v[start++];
		}
		else sum -= v[start++];
	}
	cout << ans << '\n';
	return 0;
}