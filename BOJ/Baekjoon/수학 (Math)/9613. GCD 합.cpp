#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t, n;
	cin >> t;
	whlie(t--) {
		cin >> n;
		int d[n];
		long long sum = 0;
		for (int i = 0; i < n; i++)
			cin >> d[i];
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++)
				sum += gcd(d[i], d[j]);
		}
		cout << sum << '\n';
	}
	return 0;
}