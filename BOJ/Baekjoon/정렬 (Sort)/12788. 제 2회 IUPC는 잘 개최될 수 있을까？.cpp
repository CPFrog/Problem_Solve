#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;
	int d = m * k;
	priority_queue<int> q;
	for (int i = 0; i < n; i++) {
		int p;
		cin >> p;
		q.push(p);
	}
	int b = 0, ier = 0;
	while (!q.empty()) {
		b += q.top();
		q.pop();
		iter++;
		if (b >= d) break;
	}
	if (b >= d) cout << iter << '\n';
	else cout << "STRESS" << '\n';
	return 0;
}