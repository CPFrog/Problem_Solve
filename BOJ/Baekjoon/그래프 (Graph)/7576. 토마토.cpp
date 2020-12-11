#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int dx[] = { 0,0,1,-1 };
	int dy[] = { 1,-1,0,0 };

	int m, n;
	cin >> m >> n;

	int a[n][m];
	int dist[n][m];
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			dist[i][j] = -1;
			if (a[i][j] == 1) {
				q.push(make_pair(i, j));
				dist[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
				if (a[nx][ny] == 0 && dist[nx][ny] == -1) {
					q.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
				}
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			ans = max(ans, dist[i][j]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0 && dist[i][j] == -1)
				ans = -1;
		}
	}
	cout << ans << '\n';
}