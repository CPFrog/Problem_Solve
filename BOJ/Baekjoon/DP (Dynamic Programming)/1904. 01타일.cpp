#include <iostream>
using namespace std;

int d[10000000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	d[0] = 1;
	d[1] = 2;
	for (int i = 2; i < n; i++)
		d[i] = (d[i - 1] + d[i - 2]) % 15746;

	cout << d[n - 1] % 15746 << '\n';
}