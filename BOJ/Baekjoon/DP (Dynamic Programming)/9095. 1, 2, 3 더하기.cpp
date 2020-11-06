#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, t, ar[11];
	cin >> t;
	ar[0] = 1;
	ar[1] = 2;
	ar[2] = 4;
	while (t--) {
		cin >> n;

		if (n > 3) {
			for (int i = 3; i < n; i++)
				ar[i] = ar[i - 1] + ar[i - 2] + ar[i - 3];
		}
		cout << ar[n - 1] << '\n';

	}
	return 0
}