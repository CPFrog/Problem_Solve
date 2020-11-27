#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t, n, mxm;
	cin >> t;
	int d[3][t];
	for (int i = 0; i < t; i++) {
		cin >> n;
		v.push_back(n);
	}
	d[0][0] = 0;
	d[1][0] = v.front();
	d[2][0] = v.front();
	d[3][0] = v.front();
	for (int i = 1; i < t; i++) {
		d[0][i] = max(max(d[0][i - 1], d[1][i - 1]), d[2][i - 1]);
		d[1][i] = d[0][i - 1] + v[i];
		d[2][i] = d[1][i - 1] + v[i];
	}
	mxm = max(max(d[0][t - 1], d[1][t - 1]), d[2][t - 1]);
	cout << mxm << '\n';
	return 0;
}