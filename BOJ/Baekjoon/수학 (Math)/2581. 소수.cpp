#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (n == 1) n = 2;
    int min = 100000;
    long long sum = 0;
    for (int i = n; i <= m; i++) {
        bool ok = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                ok = 0;
                break;
            }
        }
        if (ok) {
            if (min > i) min = i;
            sum += i;
        }
    }
    if (sum == 0)
        cout << -1 << '\n';
    else
        cout << sum << '\n' << min << '\n';

    return 0;
}