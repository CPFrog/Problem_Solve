#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int a[50][50];
int d[50][50];
int w, h;
int dx[] = { -1, 0, 1 };
int dy[] = { -1, 0, 1 };

void bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push(pair(x, y));
    d[x][y] = 1;
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int nx = x + dx[i];
                int ny = y + dy[j];
                if (nx >= 0 && nx < h && ny >= 0 && ny < w) {
                    if (a[nx][ny] && !d[nx][ny]) {
                        q.push(pair(nx, ny));
                        d[nx][ny] = 1;
                    }
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    while (1) {
        cin >> w >> h;
        if (!w && !h)
            return 0;

        memset(&d, 0, sizeof(d));

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++)
                cin >> a[i][j];
        }

        int cnt = 0;
        for (int x = 0; x < h; x++) {
            for (int y = 0; y < w; y++) {
                if (a[x][y] && !d[x][y]) {
                    cnt++;
                    bfs(x, y);
                }
            }
        }
        cout << cnt << '\n';
    }
}