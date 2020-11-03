#include <iostream>
using namespace std;

int s[41];

int fibonacci(int a) {
	if (a == 0) {
		s[0] = 0;
		return 0;
	}
	else if (a == 1) {
		s[1] = 1;
		return 1;
	}
	if (s[a] != 0) return s[a];
	else return s[a] = fibonacci(a - 1) + fibonacci(a - 2);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		if (n == 0) cout << "1 0" << '\n';
		else if (n == 1) cout << "0 1" << '\n';
		else {
			fibonacci(n);
			cout << s[n - 1] << ' ' << s[n] << '\n';
		}
	}
	return 0;
}
