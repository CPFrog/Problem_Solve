#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    for (int x = 1; x < n; x++) cout << ' ';
    cout << '*' << '\n';

    if (n > 1) {
        for (int i = 1; i < n - 1; i++) {
            for (int y = i; y < n - 1; y++) cout << ' ';
            cout << '*';
            for (int j = 0; j < 2 * i - 1; j++) cout << ' ';
            cout << '*' << '\n';
        }
        for (int a = 0; a < 2 * n - 1; a++) cout << '*';
        cout << '\n';
    }
    return 0;
}