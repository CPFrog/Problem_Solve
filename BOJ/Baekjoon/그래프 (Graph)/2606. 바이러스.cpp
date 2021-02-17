#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[101];
bool chk[101];

int bfs() {
	chk[1] = 1;
	queue<int> q;
	q.push(1);
	int ans = 0;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i : v[a]) {
			if (!chk[i]) {
				chk[i] = 1;
				q.push(i);
				ans++;
			}
		}
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	while (m--) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ans = bfs();
	cout << ans << '\n';
	return 0;
}