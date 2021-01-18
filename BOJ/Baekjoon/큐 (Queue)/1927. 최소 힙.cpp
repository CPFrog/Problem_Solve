#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> q;
	int n;
	cin >> n;
	while (n--) {
		int d;
		cin >> d;
		if (d == 0) {
			if (q.empty())
				cout << 0 << '\n';
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else q.push(d);
	}
	return 0;
}