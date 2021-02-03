#include <iostream>
using namespace std;

int n, m;
int a[9];
bool chk[9];

void back_tracking(int iter) {
	if (iter == n) {
		for (int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= m; i++) {
		if (!chk[i]) {
			chk[i] = 1;
			a[iter] = i;
			back_tracking(iter + 1);
			chk[i] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	cin >> m >> n;
	back_tracking(0);
	return 0;
}