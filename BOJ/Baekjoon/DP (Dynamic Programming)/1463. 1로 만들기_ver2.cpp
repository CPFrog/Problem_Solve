#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	vector<int> v;
	cin >> n;
	v.push_back(0);
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	if (n > 3) {
		for (int i = 4; i <= n; i++) {
			v.push_back(v[i - 1] + 1);
			if (i % 2 == 0 && v.back() > v[i / 2] + 1) 
				v[i] = v[i / 2] + 1;
			if (i % 3 == 0 && v.back() > v[i / 3] + 1) 
				v[i] = v[i / 3] + 1;
		}
	}
	cout << v[n] << '\n';
	return 0;
}