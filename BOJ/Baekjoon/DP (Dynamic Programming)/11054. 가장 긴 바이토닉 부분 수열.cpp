#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n, sum, mx = 1;
	cin >> n;
	int v[n], u[n], d[n];
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++) {
		u[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[i] > v[j] && u[i] < u[j] + 1)
				u[i] = u[j] + 1;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		d[i] = 1;
		for (int j = n - 1; j >= i; j--) {
			if (v[i] > v[j] && d[i] < d[j] + 1)
				d[i] = d[j] + 1;
		}
	}
	for (int i = 0; i < n; i++) {
		sum = u[i] + d[i] - 1;
		if (mx < sum) mx = sum;
	}
	cout << mx << '\n';
	return 0;
}