#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n], l[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int mx = a[0];
	for (int i = 0; i < n; i++) {
		l[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j] && l[i] > l[j] + a[i])
				l[i] = l[j] + a[i];
		}
	}
	for (int i = 1; i < n; i++) {
		if (mx < l[i]) mx = l[i];
	}
	cout << mx << '\n';
	return 0;
}