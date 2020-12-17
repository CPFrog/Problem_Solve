#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calc(int a, int b, int c) {
	switch (c) {
	case 0:
		return a + b;
	case 1:
		return a - b;
	case 2:
		return a * b;
	default:
		return a / b;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[n];
	int op;
	vector<int> v;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < 4; i++) {
		cin >> op;
		for (int j = 0; j < op; j++)
			v.push_back(i);
	}
	int max = -1000000001, min = 1000000001;
	do {
		int res = a[0];
		for (int i = 0; i < n - 1; i++)
			res = calc(res, a[i + 1], v[i]);
		if (max < res) max = res;
		if (min > res) min = res;
	} while (next_permutation(v.begin(), v.end()));
	cout << max << '\n' << min << '\n';
	return 0;
}