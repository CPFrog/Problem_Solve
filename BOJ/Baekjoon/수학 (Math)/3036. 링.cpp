#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (a < b) return gcd(b, a);
	if (!b) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	int x;
	cin >> x;
	n--;
	while (n--) {
		int d;
		cin >> d;
		int g = gcd(x, d);
		cout << x / g << '/' << d / g << '\n';
	}
	return 0;
}