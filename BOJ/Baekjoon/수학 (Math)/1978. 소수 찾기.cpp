#include <iostream>
using namespace std;

bool is_prime(int a) {
	if (a < 2) return false;
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, cnt = 0;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;

		if (is_prime(a)) cnt++;
	}
	cout << cnt << '\n';
	return 0;
}