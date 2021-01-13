#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.begin()+n);

	int cnt = 0, max = 0;
	string ans, cur = v[0];

	for (string s : v) {
		if (cur != s) {
			if (cnt > max) {
				max = cnt;
				ans = cur;
			}
			cur = s;
			cnt = 1;
		}
		else cnt++;
	}
	cout << (cnt > max ? cur : ans) << '\n';
	return 0;
}