#include <iostream>
using namespace std;

int gec(int a, int b) {
	if (b == 0) return a;
	else return gec(b, a % b);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t, a, b, g;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		g = gec(a, b);
		cout << a * b / g << '\n';
	}
	return 0;
}