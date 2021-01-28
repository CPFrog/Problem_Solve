#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	int iter = 0;
	cout << '<';
	while (!q.empty()) {
		iter++;
		if (iter == k) {
			cout << q.front();
			q.pop();
			if (!q.empty())
				cout << ", ";
			else cout << '>' << '\n';
			iter = 0;
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
	return 0;
}