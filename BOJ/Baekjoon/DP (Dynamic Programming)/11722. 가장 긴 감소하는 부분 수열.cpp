#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m = 1;
	cin >> n;
	int a[n], l[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		l[i] = 1;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[i] && l[i] < l[j + 1]) 
				l[i] = l[j] + 1;

		}
	}
	for (int i = 0; i < n; i++) {
		if (m < l[i])
			m = l[i];
	}
	cout << m << '\n';
	return 0;
}