#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(50);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	long long ans;
	sort(v.begin(), v.begin() + n);
	if (n % 2 == 1) ans = v[n / 2] * v[n / 2];
	else ans = v[0] * v[n - 1];

	cout << ans << '\n';
	return 0;
}