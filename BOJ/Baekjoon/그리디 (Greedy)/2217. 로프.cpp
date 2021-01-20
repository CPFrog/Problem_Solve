#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end();
	int max = v[n - 1];
	for (int i = 2; i <= n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			if (max > v[j] * 1) break;
			else max = v[j] * i;
		}
	}
	cout << max << '\n';
	return 0;
}