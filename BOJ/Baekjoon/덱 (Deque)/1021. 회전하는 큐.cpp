#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	deque<int> q;

	for (int i = 0; i < n; i++)
		q.push_back(i + 1);

	int ans = 0;
	while (m--) {
		int d;
		cin >> d;
		int s = q.size();
		int l = -1, r = -1;
		for (int i = 0; i < s; i++) {
			if (q[i] == d) l = i;
			if (q[s - 1 - i] == d) r = i;
		}
		if (l <= r) {
			ans += l;
			while (q.front() != d) {
				q.push_back(q[0]);
				q.pop_front();
			}
			q.pop_front();
		}
		else {
			ans += r + 1;
			while (q.front() != d) {
				q.push_front(q[s - 1]);
				q.pop_back();
			}
			q.pop_front();
		}
	}
	cout << ans << '\n';
	return 0;
}