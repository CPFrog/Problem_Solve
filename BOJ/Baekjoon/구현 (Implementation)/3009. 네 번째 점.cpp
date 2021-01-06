#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	vector<int> x(4);
	vector<int> y(4);

	for (int i = 0; i < 3; i++)
		cin >> x[i] >> y[i];

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	for (int i = 1; i < 3; i++) {
		if (x[i - 1] == x[i]) x.erase(x.begin() + i - 1, x.begin() + i + 1);
		if (y[i - 1] == y[i]) y.erase(y.begin() + i - 1, y.begin() + i + 1);
	}

	cout << x[1] << ' ' << y[1] << '\n';
	return 0;
}