#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n];
	vector<pair<int, int> > v[n];
	for (int i = 0; i < n; i++) {
		a[i] = i;
		for (int j = 0; j < n; j++) {
			int d;
			cin >> d;
			v[i].push_back(make_pair(j, d));
		}
	}
	int ans = 2147483647;
	do {
		int sum = 0, i;
		for (i = 0; i < n - 1; i++) {
			if (v[a[i]].at(a[i + 1]).second == 0)
				break;
			sum += v[a[i]].at(a[i + 1]).second;
		}
		if (i == n - 1 && v[a[i]].at(0).second > 0) {
			sum += v[a[i]].at(0).second;
			if (ans > sum)
				ans = sum;
		}
	} while (next_permutation(a + 1, a + n));
	cout << ans << '\n';
	return 0;
}