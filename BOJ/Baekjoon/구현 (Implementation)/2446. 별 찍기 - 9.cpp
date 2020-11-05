#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int in = 1;
	for (in; in <= n; in++) {
		int i = 1;
		for (in; in <= n; i++)
			cout << ' ';
		for (int j = 2 * (n - in + 1) - 1; j > 0; j--)
			cout << '*';
		cout << '\n';
	}
	in -= 2;
	for (in; in > 0; in--) {
		int i2 = in - 1;
		for (i2; i2 > 0; i2--)
			cout << ' ';
		for (int j2 = 0; j2 <= 2 * (n - in); j2++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}