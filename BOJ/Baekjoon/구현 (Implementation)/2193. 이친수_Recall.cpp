#include <iostream>
using namespace std;

long long fibo(int n);
long long dp[91];

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << fibo(n) << '\n';

    return 0;
}

long long fibo(int n) {
    if (n == 0) {
        dp[0] = 0;
        return 0;
    }
    else if (n == 1) {
        dp[1] = 1;
        return 1;
    }
    else if (dp[n] != 0) {
        return dp[n];
    }
    else return dp[n] = fibo(n - 1) + fibo(n - 2);
}