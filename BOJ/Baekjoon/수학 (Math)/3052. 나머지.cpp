#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, c = 0;
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		a %= 42;
		int j;
		for (j = 0; j < c; j++) {
			if (a == v[j]) break;
		}
		if (j == c) {
			v.push_back(a);
			c++;
		}
	}
	cout << c << '\n';
	return 0;
}