#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    priority_queue<int> q;
    int n;
    cin >> n;
    while (n--) {
        int d;
        cin >> d;
        q.push(d);
    }
    int k = q.top();
    q.pop();
    int ans = 0;
    while (!q.empty()) {
        ans += k + q.top();
        q.pop();
    }
    cout << ans << '\n';
    return 0;
}