#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	vector<int> v;
	cin >> n;

	v.push_back(1);
	v.push_back(1);
	if (n > 1) {
		for (int i = 2; i <= n; i++)
			v.push_back((v[i - 1] + v[i - 2] * 2) % 10007);
	}
	cout << v[n] % 10007 << '\n';
	return 0;
}