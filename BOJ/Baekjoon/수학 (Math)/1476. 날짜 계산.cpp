#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int e, s, m;
	cin >> e >> s >> m;

	int i = 0;
	while (++i) {
		if (e == 1 && s == 1 && m == 1) {
			cout << i << '\n';
			return 0;
		}
		e--;
		s--;
		m--;

		if (e == 0) e = 15;
		if (s == 0) s = 28;
		if (m == 0) m = 19;
	}
}