#include <iostream>
using namespace std;

long long d[12];

long long fact(int n) {
	if (n == 0) return 1;
	else if (n == 1) {
		d[0] = 1;
		return 1;
	}
	else if (d[n - 1]) return d[n - 1];
	else return d[n - 1] = fact(n - 1) * n;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	cout << fact(n) << '\n';
	return 0;
}