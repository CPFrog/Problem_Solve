#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> cnt(8001);
	int max = -4001, min = 4001;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		if (v[i] < 0)
			cnt[(v[i] * -2) - 1]++;
		else if (v[i] == 0)
			cnt[0]++;
		else cnt[v[i] * 2]++;
		if (v[i] > max)	max = v[i];
		if (v[i] < min) min = v[i];
	}
	int avg = round((double)sum / (double)n);
	sort(v.begin(), v.end());
	int mid = v[n / 2];
	int i_max = 0;
	int frq;
	vector<int> f;
	for (int i = 0; i < 8001; i++) {
		if (cnt[i] > 0) {
			if (cnt[i] > i_max) {
				i_max = cnt[i];
				vector<int> nv;
				f = nv;
				if (i % 2 == 1) f.push_back((i + 1) / 2 * -1);
				else f.push_back(i / 2);
			}
			else if (cnt[i] == i_max) {
				if (i % 2 == 1) f.push_back((i + 1) / 2 * -1);
				else f.push_back(i / 2);
			}
		}
	}
	sort(f.begin(), f.end());
	if (f.size() > 1) frq = f[1];
	else frq = f[0];

	int wid = max - min;
	cout << avg << '\n' << mid << '\n' << frq << '\n' << wid << '\n';
	return 0;
}