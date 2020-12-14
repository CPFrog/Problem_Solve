#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;

	while (t--) {
		int M, N, x, y;
		cin >> M >> N >> x >> y;

		int ans = -1;
		for (int i = x; i <= M * N; i += M) {
			if (i % N == y % N) {
				ans = i;
				break;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}