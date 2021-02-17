#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int x, y, a, b;
	int d[2][2];
	cin >> x >> y;
	for (int i = 0; i < 2; i++) {
		cin >> a >> b;
		d[i][0] = x - a, d[i][1] = y - b;
	}
	string ans = "WINNER WINNER CHICKEN DINNER!";
	if (d[0][0] * d[1][1] == d[0][1] * d[1][0])
		ans = "WHERE IS MY CHICKEN?";
	cout << ans << '\n';
	return 0;
}