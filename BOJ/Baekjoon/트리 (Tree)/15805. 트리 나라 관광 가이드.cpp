#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v((n + 1) / 2, -2);
	int suc;
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		if (!i) v[d] = -1;
		else if (v[d] == -2) v[d] = suc;
		suc = d;
	}
	cout << v.size() << '\n';
	for (int i : v)
		cout << i << ' ';
	cout << '\n';
	return 0;
}