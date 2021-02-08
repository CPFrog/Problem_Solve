#include <iostream>
#include <queue>
using namespace std;
typedef long long ll;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	if (b > a)
		return gcd(b, a);
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, s, m;
	cin >> n >> s >> m;
	n -= s;
	int a[m];
	priority_queue<int> q;
	int g;
	cin >> g;
	a[0] = g;
	q.push(g);
	for (int i = 1; i < m; i++) {
		cin >> a[i];
		q.push(a[i]);
		if (a[i] % g != 0)
			g = gcd(g, a[i]);
	}
	int x = q.top();
	q.pop();
	int y = q.top();
	q.pop();
	ll k = 0;
	for (int i : a)
		k += i / g;

	while (k < n)
		n -= k;
	ll t = -1;
	while (1) {
		t++;
		if (!t) {
			for (int i = 0; i < m; i++) {
				n--;
				if (n == 0) {
					cout << i + 1 << '\n';
					return 0;
				}
			}
			while (n > k)
				n -= k;
		}
		else {
			for (int i = 0; i < m; i++) {
				if (t % a[i] == 0)
					n--;
				if (n == 0) {
					cout << i + 1 << '\n';
					return 0;
				}
			}
		}
	}
}