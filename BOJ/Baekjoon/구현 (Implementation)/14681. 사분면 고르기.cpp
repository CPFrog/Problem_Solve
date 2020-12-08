#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;
	if (x > 0)
		cout << (y > 0 ? 1 : 4) << '\n';
	else
		cout << (y > 0 ? 2 : 3) << '\n';
	return 0;
}