#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int k, d, a;
    char c;
    cin >> k >> c >> d >> c >> a;
    string s;
    if (k + a < d || !d) s = "hasu";
    else s = "gosu";
    cout << s << '\n';
    return 0;
}