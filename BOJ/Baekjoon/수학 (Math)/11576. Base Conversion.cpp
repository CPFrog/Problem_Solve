#include <iostream>
#include <cmath>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, m;
	cin >> a >> b >> m;
	int d = 0, t;
	for (int i = 0; i < m; i++) {
		cin >> t;
		d += t * pow(a, m - i - 1);
	}
	if (d == 0) {
		cout << 0 << '\n';
		return 0;
	}
	stack<int> s;
	while (d != 0) {
		s.push(d % b);
		d /= b;
	}
	int l = s.size();
	while (l--) {
		cout << s.top() << ' ';
		s.pop();
	}
	cout << '\n';
	return 0;
}