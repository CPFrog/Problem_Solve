#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a, max = 0;
	float sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > max) max = a;
		sum += a;
	}
	cout << sum / max * 100 / n << '\n';
	return 0;
}