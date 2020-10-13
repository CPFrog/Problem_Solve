// submitted at 2018.08.07. 18:41:33
#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int main() {
	int n, m, i;
	cin >> n >> m;
	for (i = 1; i <= n; i++) q.push(i);
	cout << "<";

	while (!q.empty()) {
		for (i = 0; i < m; i++) {
			if (i == m - 1) {
				cout << q.front();
				q.pop();
				if (q.empty()) {
					cout << ">" << '\n'; break;
				}
				else cout << ", ";
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
	}
	return 0;
}