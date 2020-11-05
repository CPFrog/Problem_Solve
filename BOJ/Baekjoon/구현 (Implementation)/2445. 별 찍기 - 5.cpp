#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	for (in; in <= n; in++) {
		int i = 0;
		for (i; i < in; i++)
			cout << '*';
		for (int j = 2 * (n - in); j > 0; j--)
			cout << ' ';
		for (i; i > 0; i--)
			cout << '*';
		cout << '\n';
	}
	in -= 2;
	for (in; in > 0; in--) {
		int i2 = in;
		for (i2; i2 > 0; i2--)
			cout << '*';
		for (int j2 = 0; j2 < (n - in) * 2; j2++)
			cout << ' ';
		for (i2; i2 < in; i2++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}