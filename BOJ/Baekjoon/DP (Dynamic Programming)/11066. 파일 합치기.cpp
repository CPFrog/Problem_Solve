#include <iostream>
#include <utility>
#include <climits>
using namespace std;

int a[500];
long long d[500][500];

long long go(int s, int e) {
	if (s == e) return 0;
	else if (d[s][e] != LLONG_MAX)
		return d[s][e];
	else {
		int sum = 0;
		for (int i = s; i <= e; i++)
			sum += a[i];
		for (int i = s; i < e; i++) {
			long long temp = go(s, i) + go(i + 1, e) + sum;
			if (temp < d[s][e])
				d[s][e] = temp;
		}
		return d[s][e];
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		fill(&d[0][0], &d[499][499], LLONG_MAX);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << go(0, n - 1 << '\n');
	}
	return 0;
}