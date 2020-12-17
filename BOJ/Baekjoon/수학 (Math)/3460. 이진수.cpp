#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		queue<int> q;
		while (n > 0) {
			q.push(n % 2);
			n /= 2;
		}
		for (int i = 0; !q.empty(); i++) {
			if (q.front() == 1) cout << i << ' ';
			q.pop();
		}
		cout << '\n';
	}
	return 0;
}