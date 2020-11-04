#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int def = n;
	while (n--) {
		for (int j = def - 1; j > n; j--)
			cout << ' ';
		for (int i = 0; i <= n; i++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}