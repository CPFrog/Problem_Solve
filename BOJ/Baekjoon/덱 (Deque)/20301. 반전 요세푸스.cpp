#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, k, m;
	cin >> n >> k >> m;
	deque<int> q;
	for (int i = 1; i <= n; i++)
		q.push_back(i);
	int r = 1, cnt = 0;
	while (!q.empty()) {
		cnt++;
		if (r == 1) {
			for (int i = 0; i < k - 1; i++) {
				q.push_back(q.front());
				q.pop_front();
			}
			cout << q.front() << '\n';
			q.pop_front();
		}
		else {
			for (int i = 0; i < k - 1; i++) {
				q.push_front(q.back());
				q.pop_back();
			}
			cout << q.back() << '\n';
			q.pop_back();
		}
		if (cnt == m) {
			r *= -1;
			cnt = 0;
		}
	}
	return 0;
}