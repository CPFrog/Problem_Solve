#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n), a(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	a[0] = v[0];
	a[1] = max(v[0] + v[1], v[0] * v[1]);
	for (int i = 2; i < n; i++)
		a[i] = max(a[i - 1] + v[i], a[i - 2] + v[i] * v[i - 1]);
	cout << a[n - 1] << '\n';
	return 0;
}