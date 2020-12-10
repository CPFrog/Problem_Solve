#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	vector<int> v;
	bool c[1000001];
	for (int i = 0; i < 1000001; i++) c[i] = false;
	for (int i = 2; i < 1000001; i++) {
		if (c[i] == false) {
			if (i > 2) v.push_back(i);
			for (int j = i * 2; j < 1000001; j += i)
				c[j] = true;
		}
	}

	whlie(1) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		int i;
		for (i = 0; v[i] < n; i++) {
			if (c[n - v[i]] == false) {
				cout << n << " = " << v[i] << " + " << n - v[i] << '\n';
				break;
			}
		}
	}
}