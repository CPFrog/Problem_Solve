#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<ll> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int m_cnt = 0, cnt = 1;
	ll m = v[0], cur = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] != cur) {
			if (m_cnt < cnt) {
				m = cur;
				m_cnt = cnt;
			}
			cur = v[i];
			cnt = 1;
		}
		else cnt++;
		if (i == n - 1 && m_cnt < cnt)
			m = cur;
	}
	cout << m << '\n';
	return 0;
}