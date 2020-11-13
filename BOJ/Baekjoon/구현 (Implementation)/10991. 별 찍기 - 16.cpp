#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int b = n - i; b > 0; b--)
			cout << ' ';
		for (int j = 0; j < i; j++) {
			cout << '*';
			if (i - j > 1) cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}