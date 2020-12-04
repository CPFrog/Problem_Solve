#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    string o;
    cin >> o;
    if (o == "0") {
        cout << 0 << '\n';
        return 0;
    }
    int l = o.length();
    queue<int> q;
    stack<int> s;
    for (int i = 0; i < l; i++) {
        o[i] -= '0';
        for (int j = 2; j >= 0; j--) {
            int p = pow(2, j);
            q.push(o[i] / p);
            o[i] %= p;
            if (i == 0 && q.size() == 1) {
                if (q.front() == 0)
                    q.pop();
            }
        }
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    cout << '\n';
    return 0;
}