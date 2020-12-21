#include <iostream>
using namespace std;

int t[20], p[20];
int n;
int ans = 0;

void func(int day, int sum) {
	if (day == n) {
		if (ans < sum) ans = sum;
		return;
	}
	if (day > n) return;
	func(day + 1, sum);
	func(day + t[day], sum + p[day]);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> t[i] >> p[i];

	func(0, 0);

	cout << ans << '\n';
	return 0;
}