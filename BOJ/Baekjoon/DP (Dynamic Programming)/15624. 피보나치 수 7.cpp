#include <iostream>
using namespace std;

int fib[1000001];

int fibo(int n) {
	if (fib[n] != 0) return fib[n];
	if (n == 0) return 0;
	if (n == 1) {
		fib[1] = 1;
		return 1;
	}
	return fib[n] = fibo(n - 1) % 1000000007 + fibo(n - 2) % 1000000007;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	cout << fibo(n) % 1000000007 << '\n';
	return 0;
}