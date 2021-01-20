#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int a[26][26];
int d[26][26];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int n, cnt = 0;
int ans[314];

void bfs(int x, int y, int cnt) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    d[x][y] = cnt;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                if (a[nx][ny] && !d[nx][ny]) {
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = cnt;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
            a[i][j] = s[j] - '0';
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] && !d[i][j])
                bfs(i, j, ++cnt);
        }
    }

    cout << cnt << '\n';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            ans[d[i][j]]++;
    }

    sort(ans + 1, ans + 1 + cnt);
    for (int i = 1; i <= cnt; i++)
        cout << ans[i] << '\n';
    return 0;
}