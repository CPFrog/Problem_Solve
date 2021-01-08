#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio();

	long long fibo[91];
	fibo[0] = 0;
	fibo[1] = 1;
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	cout << fibo[n] << '\n';
	return 0;
}