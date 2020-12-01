#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int d[n + 1];
	d[0] = 0;
	for (int i = 1; i < n + 1; i++) {
		d[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (d[i] > d[i - j * j] + 1) 
				d[i] = d[i - j * j] + 1;
		}
	}
	cout << d[n] << '\n';
	return 0;
}