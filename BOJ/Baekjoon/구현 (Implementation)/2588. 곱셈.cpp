#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    int a, b, t, b1, b10, b100;
    cin >> a >> b;
    b1 = b;
    b100 = b1 / 100;
    b1 %= 100;
    b10 = b1 / 10;
    b1 %= 10;

    cout << a * b1 << '\n' << a * b10 << '\n' << a * b100 << '\n' << a * b << '\n';
    return 0;
}