#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int y;
	cin >> y;
	if (y % 400 == 0)cout << 1 << '\n';
	else if (y % 4 == 0 && y % 100 != 0) cout << 1 << '\n';
	else cout << o << '\n';

	return 0;
}