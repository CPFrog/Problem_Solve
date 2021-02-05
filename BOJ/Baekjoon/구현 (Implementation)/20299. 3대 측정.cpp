#include <iostream>
#include <queue>
using namespace std;

struct Team {
	int a, b, c;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, k, l;
	cin >> n >> k >> l;
	int ans = 0;
	queue<Team> q;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a >= l && b >= l && c >= l && a + b + c >= k) {
			Team t;
			t.a = a, t.b = b, t.c = c;
			q.push(t);
			ans++;
		}
	}
	cout << ans << '\n';
	while (!q.empty()) {
		cout << q.front().a << ' ' << q.front().b << ' ' << q.front().c << ' ';
		q.pop();
	}
	cout << '\n';
	return 0;
}