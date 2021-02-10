#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, d;
	cin >> n;
	vector<int> e(101, -1);
	for (int i = 0; i < n; i++)
		cin >> d >> e[d];

	int r;
	cin >> r;
	for (int i = 0; i < r; i++) {
		int t;
		cin >> t;
		bool ok = 1;
		vector<int> v;
		for (int j = 0; j < t; j++) {
			cin >> d;
			if (e[d] != -1) v.push_back(e[d]);
			else ok = 0;
		}
		if (ok) {
			for (int k : v)
				cout << k << ' ';
			cout << '\n';
		}
		else cout << "YOU DIED" << '\n';
	}
	return 0;
}