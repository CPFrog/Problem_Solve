#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, d, max = -1000001, min = 1000001;
	vector<int> v;
	cin >> n;

	while (n--) {
		cin >> d;
		v.push_back(d);
	}

	while (!v.empty()) {
		if (v.back() < min) min = v.back();
		if (v.back() > max) max = v.back();
		v.pop_back();
	}
	cout << min << " " << max << '\n';
	return 0;
}