#include <iostream>
using namespace std;

int div_sum(int a) {
	int sum = a;
	for (; a != 0; a /= 10)
		sum += a % 10;
	return sum;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = 0;
	if (n > 9) {
		int s;
		if (n < 18) s = 10;
		else if (n < 54) s = n - 14;
		else s = n - 54;
		for (int i = s; i < n; i++) {
			if (div_sum(i) == n) {
				ans = i;
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}