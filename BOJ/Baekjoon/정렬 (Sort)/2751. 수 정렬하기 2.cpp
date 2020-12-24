#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v;
	int d;
	for (int i = 0; i < n; i++) {
		cin >> d;
		v.push_back(d);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
		cout << v[i] << '\n';
	return 0;
}