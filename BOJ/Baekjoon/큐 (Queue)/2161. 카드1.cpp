#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	queue<int> q;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		q.push(i);

	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
		q.push(q.front());
		q.pop();
	}
	return 0;
}