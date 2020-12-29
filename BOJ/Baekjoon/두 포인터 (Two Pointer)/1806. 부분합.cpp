#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, s;
	cin >> n >> s;
	vector<int> v;
	int d;
	for (int i = 0; i < n; i++) {
		cin >> d;
		v.push_back(d);
	}
	int start = 0, end = 0;
	int sum = v[0];
	int ans = 100001;
	while (start < n) {
		if (sum < s) {
			if (end < n) sum += v[++end];
			else sum -= v[start++];
		}
		else {
			if (end - start < ans) ans = end - start + 1;
			if (sum == s) {
				if (end < n) sum += v[++end];
				else sum -= v[start++];
			}
			else sum -= v[start++];
		}
	}
	if (ans == 100001) ans = 0;
	cout << ans << '\n';
	return 0;
}