#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true) {
		int n;
		cin >> n;
		if (n == 0)
			return 0;
		int a[n], h[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i < 6) h[i] = 0;
			else h[i] = 1;
		}
		do {
			for (int i = 0; i < n; i++) {
				if (h[i] == 0)
					cout << a[i] << ' ';
			}
			cout << '\n';
		} while (next_permutation(h, h + n));
		cout << '\n';
	}
}