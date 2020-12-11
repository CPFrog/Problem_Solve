#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int x, y;
	x = (c * e - b * f) / (a * e - b * d);
	y = (c * d - a * f) / (b * d - a * e);
	cout << x << ' ' << y << '\n';
	return 0;
}