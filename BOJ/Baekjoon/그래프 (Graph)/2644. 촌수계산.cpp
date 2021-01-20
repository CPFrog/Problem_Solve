#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> v[101];
queue<int> q;
int dist[101];
bool chk[101];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, s, e;
    cin >> n >> s >> e >> n;
    for (int i = 0; i < n; i++) {
        int p, num;
        cin >> p >> num;
        v[p].push_back(num);
        v[num].push_back(p);
    }
    // bfs
    chk[s] = 1;
    q.push(s);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i : v[x]) {
            if (!chk[i]) {
                chk[i] = 1;
                q.push(i);
                dist[i] = dist[x] + 1;
            }
        }
    }
    int ans = -1;
    if (dist[e] != 0) ans = dist[e];
    cout << ans << '\n';
    return 0;
}