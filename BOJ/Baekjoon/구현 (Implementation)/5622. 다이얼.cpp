#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    cin >> s;
    int t = 0;
    for (char c : s) {
        if (c <= 'C')
            t += 3;
        else if (c <= 'F')
            t += 4;
        else if (c <= 'I')
            t += 5;
        else if (c <= 'L')
            t += 6;
        else if (c <= 'O')
            t += 7;
        else if (c <= 'S')
            t += 8;
        else if (c <= 'V')
            t += 9;
        else t += 10;
    }
    cout << t << '\n';
    return 0;
}