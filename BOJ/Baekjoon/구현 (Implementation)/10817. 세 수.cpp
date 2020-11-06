#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int* tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (a > b) swap(a, b);
	if (b > c) swamp(b, c);
	if (a > b) swamp(a, b);

	cout << b << '\n';
	return 0;
}