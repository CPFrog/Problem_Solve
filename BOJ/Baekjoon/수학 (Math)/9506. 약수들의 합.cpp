#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (n == -1) return 0;
		vector<int> v;
		int sum = 0;
		for (int i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				sum += i;
				v.push_back(i);
				if (n / i != i && n / i != n) {
					sum += n / i;
					v.push_back(n / i);
				}
			}
		}
		if (sum == n) {
			sort(v.begin(), v.end());
			cout << n << " = ";
			int l = v.size();
			for (int i = 0; i < l; i++) {
				cout << v[i];
				if (i < l - 1) cout << " + ";
				else cout << '\n';
			}
		}
		else
			cout << n << " is NOT perfect.\n";
	}
}