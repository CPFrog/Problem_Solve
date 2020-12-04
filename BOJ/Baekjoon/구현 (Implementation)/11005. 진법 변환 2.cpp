#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, b;
	stack<char> s;
	cin >> n >> b;
	if (n == 0) cout << 0;
	else {
		while (n > 0) {
			int k = n % b;
			if (k > 9) s.push(k + 55);
			else s.push(k + 48);
			n /= b;
		}
		while(!s.empty) {
			cout << s.top();
			s.pop();
		}
	}
	cout << '\n';
	return 0;
}