#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, op;
	long long cnt = 1;
	cin >> n;

	op = (n / 10 + n % 10) % 10 + n % 10 * 10;
	while (op != n) {
		op = (op / 10 + op % 10) % 10 + op % 10 * 10;
		cnt++;
	}

	cout << cnt << '\n';
	return 0;
}