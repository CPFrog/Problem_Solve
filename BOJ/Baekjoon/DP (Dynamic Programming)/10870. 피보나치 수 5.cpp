#include <iostream>
using namespace std;

int fib[30];
int fibo(int n) {
	if (n == 0) {
		fib[0] = 0;
		return 0;
	}
	else if (n == 1) {
		fib[1] = 1;
		return 1;
	}
	if (fib[n] != 0) return fib[n];
	else return fib[n] = fibo(n - 1) + fibo(n - 2);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}