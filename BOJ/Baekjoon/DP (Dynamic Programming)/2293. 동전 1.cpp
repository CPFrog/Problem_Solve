#include <iostream>
using namespace std;

int a[101];
int d[100001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	d[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j - a[i] >= 0)
				d[j] += d[j - a[i]];
		}
	}
	cout << d[k] << '\n';
	return 0;
}