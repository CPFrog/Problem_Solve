#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> c(n + 1);
	vector<int> w(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> c[i];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++)
			w[i] = max(w[i], w[i - j] + c[j]);
	}
	cout << w[n] << '\n';
	return 0;
}