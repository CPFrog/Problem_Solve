#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;

	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(make_pair(a, i));
	}

	sort(v.begin(), v.end());
	int max = -1;
	for (int i = 0; i < n; i++) {
		int dif = v[i].second - i;
		if (dif > max) max = dif;
	}

	cout << max + 1 << '\n';
	return 0;
}