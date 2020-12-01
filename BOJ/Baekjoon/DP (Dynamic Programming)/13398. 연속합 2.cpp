#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n], l[n], r[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		l[i] = a[i];
		if (i > 0 && l[i] < l[i - 1] + a[i]) 
			l[i] = l[i - 1] + a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		r[i] = a[i];
		if (i < n - 1 && r[i] < r[i + 1] + a[i])
			r[i] = r[i + 1] + a[i];
	}
	int m = l[0];
	for (int i = 1; i < n; i++) {
		if (m < l[i]) m = l[i];
	}
	for (int i = 1; i < n - 1; i++) {
		if (m < l[i - 1] + r[i + 1]) 
			m = l[i - 1] + r[i + 1];
	}
	cout << m << '\n';
	return 0;
}