#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	int a = 0, b = 0;
	int minus = 1;
	int l = s.length();
	for (int i = 0; i < l; i++) {
		if (s[i] >= '0' && s[i] <= '9')
			b = b * 10 + s[i] - '0';
		else {
			a += b * minus;
			b = 0;
			if (s[i] == '-')
				minus = -1;
		}
	}
	a += b * minus;
	cout << a << '\n';
	return 0;
}