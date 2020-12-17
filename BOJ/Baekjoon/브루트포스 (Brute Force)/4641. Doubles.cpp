#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true) {
		vector<int> v;
		while (true) {
			int n;
			cin >> n;
			if (n == -1) return 0;
			if (n == 0) break;
			v.push_back(n);
		}
		int vl = v.size();
		int dc = 0;
		for (int i = 0; i < vl - 1; i++) {
			for (int j = i + 1; j < vl; j++) {
				if (v[i] * 2 == v[j] || v[j] * 2 == v[i]) dc++;
			}
		}
		cout << dc << '\n';
	}
}