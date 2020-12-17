#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int l, p;
	cin >> l >> p;
	int np = l * p;
	for (int i = 0; i < 5; i++) {
		int a;
		cin >> a;
		cout << a - np << ' ';
	}
	cout << '\n';
	return 0;
}