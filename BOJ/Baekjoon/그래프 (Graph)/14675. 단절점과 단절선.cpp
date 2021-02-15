#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	int a[n + 1];
	fill(a, a + n + 1, 0);

	for (int i = 1; i < n; i++) {
		int s, e;
		cin >> s >> e;
		a[s]++;
		a[e]++;
	}
	cin >> n;
	while (n--) {
		int q, num;
		cin >> q >> num;
		string s = "yes";
		if (q == 1) {
			if (a[num] == 1) s = "no";
		}
		cout << s << '\n';
	}
	return 0;
}