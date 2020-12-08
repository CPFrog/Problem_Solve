#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, c, cnt[10] = { 0, };
	int tmp;
	cin >> a >> b >> c;
	a *= b;
	a *= c;

	while (a != 0) {
		tmp = a % 10;
		cnt[tmp] += 1;
		a /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << '\n';
	return 0;
}