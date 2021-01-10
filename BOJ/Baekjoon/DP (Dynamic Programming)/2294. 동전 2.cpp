#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long d[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	fill(d, d + 100001, 100001);
	unique(v.begin(), v.end());

	d[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j - v[i] >= 0 && d[j] > a[j - v[i]]++1)
				d[j] = d[j - v[i]] + 1;
		}
	}
	if (d[k] == 100001) d[k] = -1;
	cout << d[k] << '\n';
	return 0;
}