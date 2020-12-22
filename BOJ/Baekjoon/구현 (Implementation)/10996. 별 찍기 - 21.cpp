#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n == 1) {
		cout << '*' << '\n';
		return 0;
	}
	for (int i = 0; i < n * 2; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (j % 2 == 0) cout << '*';
				else cout << ' ';
			}
		}
		else {
			for (int j = 0; j < n; j++) {
				if (j % 2 == 0) cout << ' ';
				else cout << '*';
			}
		}
		cout << '\n';
	}
	return 0;
}