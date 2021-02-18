#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> v(n);
	vector<pair<int, int>> arrive;
	for (int i = 0; i < m; i++) {
		int bn, t;
		cin >> bn >> t;
		arrive.push_back({ bn,t });
	}
	int head = 0, tail = 0, cur = 0, ct = 0;
	while (cur < m) {
		for (int i = head; i < tail; i++) {
			v[i].second--;
			if (head == i && v[i].second <= 0) {
				head++;
				if (head == tail) {
					head = 0;
					tail = 0;
				}
			}
		}
		ct++;
		while (cur < m) {
			if (tail < n) {
				if (arrive[cur].first <= ct) {
					v[tail] = arrive[cur];
					tail++;
					cur++;
				}
				else break;
			}
			else break;
		}
	}
	cout << tail << '\n';
	return 0;
}