#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

struct HW {
	int due;
	int score;
};

bool cmp(const HW& u, const HW& k) {
	return u.score > k.score;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	bool sc[1000];
	memset(sc, 0, sizeof(sc));

	vector<HW> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i].due >> v[i].score;
	sort(v.begin(), v.end(), cmp);

	int ans = 0;
	for (HW w : v) {
		for (int i = w.due - 1; i >= 0; i--) {
			if (!sc[i]) {
				ans += w.score;
				sc[i] = 1;
				break;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}