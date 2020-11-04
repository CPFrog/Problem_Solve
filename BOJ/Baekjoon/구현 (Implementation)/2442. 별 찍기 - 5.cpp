#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int t = 1; t <= n; t++) {
		for (int j = 0; j < n - t; j++)
			cout << ' ';
		for (int i = 0; i < 2 * t - 1; i++)
			cout << '*';
		cout << '\n';
	}
	return 0;
}