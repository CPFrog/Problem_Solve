#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int gcd(int a, int b) {
	if (a < b) return gcd(b, a);
	if (!b) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());

	int x = v[1] - v[0];
	set<int> s;
	if (n > 2) {
		for (int i = 2; i < n; i++)
			x = gcd(x, v[i] - v[i - 1]);
	}
	s.insert(x);
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) {
			s.insert(i);
			s.insert(x / i);
		}
	}
	for (int i : s) {
		if (i == 1) continue;
		cout << i << ' ';
	}
	cout << '\n';
	return 0;
}