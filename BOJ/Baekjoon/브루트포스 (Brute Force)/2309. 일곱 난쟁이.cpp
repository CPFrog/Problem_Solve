#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int h[9];
	vector<int> v;
	int total = 0;
	for (int i = 0; i < 9; i++) {
		cin >> h[i];
		total += h[i];
	}

	int x, y;
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (total - h[i] - h[j] == 100) {
				x = i;
				y = j;
				goto NEXT;
			}
		}
	}

NEXT:
	for (int i = 0; i < 9; i++) {
		if (i == x || i == y) continue;
		v.push_back(h[i]);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 7; i++)
		cout << v[i] << '\n';
	return 0;
}