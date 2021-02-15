#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef unsigned long long ll;
static const ll DIV = 1000000007;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    int r1, c1, r2, c2;
    vector<ll> a[50];
    int b[50][50];
    cin >> r1 >> c1;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            ll d;
            cin >> d;
            a[i].push_back(d);
        }
    }
    bool ok = 1;
    for (int iter = 1; iter < n; iter++) {
        cin >> r2 >> c2;
        if (r2 != c1) ok = 0;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++)
                cin >> b[i][j];
        }
        if (ok) {
            c1 = c2;
            vector<ll> t[50];
            for (int k = 0; k < r1; k++) {
                for (int i = 0; i < c2; i++) {
                    ll tmp = 0;
                    for (int j = 0; j < r2; j++)
                        tmp += (a[k][j] * b[j][i]) % DIV;
                    tmp %= DIV;
                    t[k].push_back(tmp);
                }
            }
            swap(a, t);
        }
    }
    if (ok) {
        ll ans = 0;
        for (int i = 0; i < r1; i++) {
            for (int j : a[i]) {
                ans += j % DIV;
                ans %= DIV;
            }
        }
        ans %= DIV;
        cout << ans << '\n';
    }
    else cout << -1 << '\n';
    return 0;
}