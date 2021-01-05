#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << min(min(w - x, h - y), min(x, y)) << '\n';
	return 0;
}