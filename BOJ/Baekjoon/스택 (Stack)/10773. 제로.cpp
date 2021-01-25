#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	stack<int> s;
	while (n--) {
		int d;
		cin >> d;
		if (!d) s.pop();
		else s.push(d);
	}
	int ans = 0;
	while (!s.empty()) {
		ans += s.top();
		s.pop();
	}
	cout << ans << '\n';
	return 0;
}