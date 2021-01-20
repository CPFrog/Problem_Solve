#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int o[2];
	cin >> o[0] >> o[1];

	int n[2] = { 0,0 };
	for (int i = 0; i < 2; i++) {
		while (o[i] > 0) {
			n[i] *= 10;
			n[i] += o[i] % 10;
			o[i] /= 10;
		}
	}
	cout << (n[0] > n[1] ? n[0] : n[1]) << '\n';
	return 0;
}