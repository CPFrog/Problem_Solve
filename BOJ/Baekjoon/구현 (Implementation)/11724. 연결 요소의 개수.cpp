#include <iostream>
#include <vector>
using namespace std;

bool chk[1000];
vector<int> v[1000];

void dfs(int n) {
	for (int i : v[n]) {
		if (!chk[i]) {
			chk[i] = 1;
			dfs(i);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	while (m--) {
		int i, j;
		cin >> i >> j;
		v[i - 1].push_back(j - 1);
		v[j - 1].push_back(i - 1);
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (!chk[i]) {
			chk[i] = 1;
			ans++;
			dfs(i);
		}
	}
	cout << ans << '\n';
	return 0;
}