#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int h, m, s;
    cin >> h >> m >> s;
    int tc;
    cin >> tc;
    while (tc--) {
        int q;
        cin >> q;
        if (q < 3) {
            int t;
            cin >> t;
            int hh = t / 3600, mm = (t % 3600) / 60;
            t %= 60;

            if (q == 1) {
                s += t;
                int up = 0;
                if (s >= 60) {
                    up = s / 60;
                    s %= 60;
                }
                m += mm + up;
                up = 0;
                if (m >= 60) {
                    up = m / 60;
                    m %= 60;
                }
                h += hh + up;
                h %= 24;
            }
            else {
                s -= t;
                int dn = 0;
                if (s < 0) {
                    dn = 1;
                    s += 60;
                }
                m -= mm + dn;
                dn = 0;
                if (m < 0) {
                    m += 60;
                    dn = 1;
                }
                h -= hh + dn;
                while (h < 0)
                    h += 24;
            }
        }
        else
            cout << h << ' ' << m << ' ' << s << '\n';
    }
    return 0;
}