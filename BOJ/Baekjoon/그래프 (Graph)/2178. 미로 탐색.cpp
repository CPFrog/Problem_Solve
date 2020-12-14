#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int a[n][m];
	int dist[n][m];
	int dx[] = { 0,0,1,-1 };
	int dy[] = { 1,-1,0,0 };
	string s;
	for (int i = 0i < n; i++) {
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s.at(j) - '0';
			dist[i][j] = -1;
		}
	}
	dist[0][0] = 1;
	queue<pair<int, int>> q;
	q.push(make_pair(0, 0));
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (a[nx][ny] == 1 && dist[nx][ny] == -1) {
					q.push(make_pair(nx, ny));
					dist[nx][ny] = dist[x][y] + 1;
				}
			}
		}
	}
	cout << dist[n - 1][m - 1] << '\n';
	return 0;
}