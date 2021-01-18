#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(500);
	int a;
	for (int i = 0; i < n; i++) {
		vector<int> p = v;
		for (int j = 0; j <= i; j++) {
			cin >> a;
			if (j == 0) v[j] = p[j] + a;
			else if (j == i) v[j] = p[j - 1] + a;
			else v[j] = max(p[j - 1], p[j]) + a;
		}
	}
	int m = 0;
	for (int i : v)
		if (i > m) m = i;
	cout << m << '\n';
	return 0;
}