#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		queue<int> q;
		vector<int> v;

		while (n--) {
			int d;
			cin >> d;
			q.push(d);
			v.push_back(d);
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		int ans = 0;
		while (!q.empty()) {
			if (q.front() == v[0]) {
				ans++;
				q.pop();
				v.erase(v.begin());
				if (m == 0) break;
				else m--;
			}
			else {
				q.push(q.front());
				q.pop();
				if (m == 0) m = q.size() - 1;
				else m--;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}