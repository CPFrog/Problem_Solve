#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, x, d;
	cin >> n >> x;
	while (n--) {
		cin >> d;
		if (d < x) cout << d << " ";
	}
	cout << '\n';
	return 0;
}