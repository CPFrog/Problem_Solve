#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a;
	cin >> a;
	for (int i = 2; i * i <= a; i++) {
		while (a % i == 0) {
			cout << i << '\n';
			a /= i;
		}
	}
	if (a > 1) cout << a << '\n';
	return 0;
}