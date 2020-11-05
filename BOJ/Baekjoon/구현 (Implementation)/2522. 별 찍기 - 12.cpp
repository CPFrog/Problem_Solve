#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	int in = 1;
	for (in; in <= n; in++) {
		int i = 0;
		for (i; i < n - in; i++)
			cout << ' ';
		for (int j = 0; j < in; j++)
			cout << '*';
		cout << '\n';
	}
	in -= 2;
	for (in; in > 0; in--) {
		int i2 = in;
		for (i2 = 0; i2 < n - in; i2++)
			cout << ' ';
		for (int j2 = in; j2 > 0; j2--)
			cout << '*';
		cout << '\n';
	}
	return 0;
}