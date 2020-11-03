#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, total = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (a < 40) a = 40;
		total += a;
	}
	cout << total / 5;
	return 0;
}