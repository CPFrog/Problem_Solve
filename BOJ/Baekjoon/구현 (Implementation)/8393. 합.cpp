#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, res = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
		res += i;
	cout << res << '\n';
	return 0;
}