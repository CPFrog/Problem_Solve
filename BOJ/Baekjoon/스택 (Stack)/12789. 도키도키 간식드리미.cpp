#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        q.push(d);
    }
    stack<int> s;
    int i = 1;
    while (!q.empty() || !s.empty()) {
        if (!s.empty() && s.top() == i) {
            s.pop();
            i++;
            continue;
        }
        while (!q.empty() && q.front() != i) {
            s.push(q.front());
            q.pop();
        }
        if (!q.empty() && q.front() == i) {
            q.pop();
            i++;
        }
        else break;
    }
    if (i == n + 1) cout << "Nice" << '\n';
    else cout << "Sad" << '\n';
    return 0;
}