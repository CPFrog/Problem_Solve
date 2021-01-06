#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, a, b;
	cin >> n >> a >> b;
	vector<int> v;

	int k, s;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> k;
			if ((i == a - 1) ^ (j == b - 1))
				v.push_back(k);
			else if (i == a - 1 && j == b - 1)
				s = k;
		}
	}
	bool happy = 1;
	for (int x : v) {
		if (x > s) {
			happy = 0;
			break;
		}
	}
	cout << (happy ? "HAPPY" : "ANGRY") << '\n';
	return 0;
}