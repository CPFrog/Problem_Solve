#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int s[n], avg = 0;
		float p = 0;
		for (int i = 0; i < n; i++) {
			cin >> s[i];
			avg += s[i];
		}
		avg /= n;
		for (int i = 0; i < n; i++) {
			if (s[i] > avg) p += 1;
		}
		p = p / n * 100;
		cout << fixed;
		cout.precision(3);
		cout << p << '%' << '\n';
	}
	return 0;
}