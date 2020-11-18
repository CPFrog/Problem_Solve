#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int n, k, v, c = 0;
	cin >> n >> k;

	stack<int> s;
	while (n--) {
		cin >> v;
		s.push(v);
	}
	while (!s.empty()) {
		v = s.top();
		c += k / v;
		k %= v;
		s.pop();
	}
	cout << c << '\n';
	return 0;
}