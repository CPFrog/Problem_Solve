#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meet {
	int begin, end;
};

bool cmp(const Meet& u, const Meet& v) {
	if (u.end == v.end)
		return u.begin < v.begin;
	else return u.end < v.end;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	vector<Meet> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].begin >> v[i].end;

	sort(v.begin(), v.end(), cmp);

	int now = 0, ans = 0;

	for (int i = 0; i < n; i++) {
		if (now <= v[i].begin) {
			now = v[i].end;
			ans++;
		}
	}
	cout << ans << '\n';
	return 0;
}