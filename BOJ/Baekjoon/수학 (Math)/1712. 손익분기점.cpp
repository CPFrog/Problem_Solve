#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, c, p;
	cin >> a >> b >> c;
	p = c - b;
	if (p <= 0) cout << -1 << '\n';
	else {
		a /= p;
		cout << a + 1 << '\n';
	}
	return 0;
}