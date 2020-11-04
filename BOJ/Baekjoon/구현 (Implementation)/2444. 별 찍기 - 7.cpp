#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int in = 0;
	for (in; in < n; in++) {
		for (int i = n - 1; i > in; i--)
			cout << ' ';
		for (int j = 0; j < (in + 1) * 2 - 1; j++)
			cout << '*';
		cout << '\n';
	}
	for (in -= 1; in > 0; in--) {
		for (int i2 = 0; i2 < n - in; i2++)
			cout << ' ';
		for (int j2 = in * 2 - 1; j2 > 0; j2--)
			cout << '*';
		cout << '\n';
	}
	return 0;
}