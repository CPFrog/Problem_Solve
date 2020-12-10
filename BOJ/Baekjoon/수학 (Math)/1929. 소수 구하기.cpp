#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int m, n;
	cin >> m > .n;

	bool c[n + 1];
	for (int i = 0; i < n + 1; i++)
		c[i] = false;
	queue<int> q;
	for (int i = 2; i <= n; i++) {
		if (c[i] == false) {
			if (i >= m) q.push(i);
			for (int j = i * 2; j <= n; j += i)
				c[j] = true;
		}
	}
	int l = q.size();
	while (l--) {
		cout << q.front() << '\n';
		q.pop();
	}
	return 0;
}