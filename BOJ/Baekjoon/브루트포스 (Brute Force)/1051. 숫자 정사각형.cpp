#include <iostream>
#include <vector>
using namespace std;

vector<string> v(50);

bool cmp(int i, int j, int k) {
    if (v[i][j] == v[i][j + k] && v[i][j] == v[i + k][j] && v[i][j] == v[i + k][j + k])
        return 1;
    else return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int mx = n < m ? n : m;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 1;

    for (int k = 1; k < mx; k++) {
        bool b = 0;
        for (int i = 0; i < n - k; i++) {
            for (int j = 0; j < m - k; j++) {
                if (cmp(i, j, k)) {
                    ans = k + 1;
                    b = 1;
                    break;
                }
            }
            if (b) break;
        }
    }
    cout << ans * ans << '\n';
    return 0;
}