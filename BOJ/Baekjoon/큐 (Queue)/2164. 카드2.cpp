#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	whlie(q.size() != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front() << '\n';
	return 0;
}