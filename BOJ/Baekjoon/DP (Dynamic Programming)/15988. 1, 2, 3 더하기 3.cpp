#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t, n;
	cin >> t;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	while (t--) {
		cin >> n;
		for (int i = 4; i <= n; i++) {
			if (v[i] != 0) continue;
			v.push_back((v[i - 1] + v[i - 2]) % 1000000009);
			v[i] += v[i - 3];
			v[i] %= 1000000009;
		}
		cout << v[n] << '\n';
	}
	return 0;
}