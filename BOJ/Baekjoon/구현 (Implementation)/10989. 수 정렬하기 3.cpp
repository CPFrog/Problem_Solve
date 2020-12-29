#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int a[10001] = { 0, };
	int d;
	for (int i = 0; i < n; i++) {
		cin >> d;
		a[d]++;
	}
	for (int i = 1; i < 10001; i++) {
		while (a[i]--)
			cout << i << '\n';
	}
	return 0;
}