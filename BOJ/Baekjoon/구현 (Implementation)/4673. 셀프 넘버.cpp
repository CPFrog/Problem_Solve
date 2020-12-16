#include <iostream>
using namespace std;

int d(int n) {
	int sum = n;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	bool b[10001];
	for (int i = 0; i < 10001; i++) {
		b[i] = true;
	}

	int pos;

	for (int i = 1; i < 10001; i++) {
		if (b[i]) {
			cout << i << '\n';
		}
		pos = d(i);
		if (pos <= 10000) {
			b[pos] = false;
		}
	}
	return 0;
}