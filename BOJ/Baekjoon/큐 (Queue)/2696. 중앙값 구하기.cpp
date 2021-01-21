#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		priority_queue<int, vector<int>, greater<int>> q;
		vector<int> v;
		for (int i = 1; i <= n; i++) {
			int d;
			cin >> d;
			q.push(d);
			if (i % 2) {
				vector<int> t;
				for (int j = 0; j < i / 2; j++) {
					t.push_back(q.top());
					q.pop();
				}
				v.push_back(q.top());
				for (int k : t)
					q.push(k);
			}
		}
		int l = v.size();
		cout << l << '\n';
		for (int i = 0; i < l; i++) {
			cout << v[i] << ' ';
			if (i != l - 1 && i % 10 == 9) cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}