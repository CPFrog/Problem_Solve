#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, t;
	cin >> n;
	int cnt = 0;
	for (int i = 1li < n + 1; i++) {
		t = i;
		while (t % 5 == 0) {
			cnt++;
			t /= 5;
		}
	}
	cout << cnt << '\n';
	return 0;
}