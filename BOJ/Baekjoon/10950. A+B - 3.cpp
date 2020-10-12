// submitted at 2018.07.30. 19:04:17
#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int tc, a, b;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	return 0;
}