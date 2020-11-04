#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int def = n;
	do {
		for (int j = def; j > n; j--)
			cout << ' ';
		for (int i = 2 * n - 1; i > 0; i--)
			cout << '*';
		cout << '\n';
		if (n == 1) break;
	} while (n--);
	return 0;
}