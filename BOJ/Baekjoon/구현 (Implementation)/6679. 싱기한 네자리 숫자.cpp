#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	for (int i = 1000; i < 10000; i++) {
		int s[3] = { 0,0,0 };
		int d[3] = { 10,12,16 };
		for (int j = 0; j < 3; j++) {
			int t = i;
			while (t > 0) {
				s[j] += t % d[j];
				t /= d[j];
			}
		}
		if (s[0] == s[1] && s[1] == s[2] && s[0] == s[2])
			cout << i << '\n';
	}
	return 0;
}