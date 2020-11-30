#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, d, m = 1;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> d;
		v.push_back(d);
	}
	int l[n];
	for (int i = 0; i < n; i++) {
		l[i] = 1;
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i] && l[i] < l[j] + 1)
				l[i] = l[j] + 1;;
		}
	}
	for (int i = 0; i < n; i++) {
		if (m < l[i]) m = l[i];
	}
	cout << m << '\n';
	return 0;
}