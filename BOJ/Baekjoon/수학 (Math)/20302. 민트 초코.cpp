#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];
int a[100001];

vector<int> siv;

void era() {
	siv.push_back(2);
	for (int i = 3; i < 100000; i += 2) {
		bool ok = 1;
		for (int j = 3; j * j <= 1; j += 2) {
			if (i % j == 0) {
				ok = 0;
				break;
			}
		}
		if (ok) siv.push_back(i);
	}
}

void go(int n) {
	if (!v[n].empty())
		return;
	if (n == 0 || n == 1) {
		v[n].push_back(n);
		return;
	}
	for (int i : siv) {
		if (i > n) break;
		if (n % i == 0) {
			v[n].push_back(i);
			go(n / i);
			v[n].insert(v[n].end(), v[n / i].begin(), v[n / i].end());
			break;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	era();

	int n;
	cin >> n;

	int d;
	cin >> d;
	if (d < 0)
		d *= -1;
	int max = d;
	go(d);
	for (int k : v[d])
		a[k]++;
	for (int i = 1; i < n; i++) {
		char c;
		cin >> c >> d;
		if (d < 0)
			d *= -1;
		if (d > max) max = d;
		go(d);
		if (c == '*') {
			for (int k : v[d])
				a[k]++;
		}
		else {
			for (int k : v[d])
				a[k]--;
		}
	}
	string s = "mint chocolate";
	if (a[0] == 0) {
		for (int i : siv) {
			if (i > max) break;
			if (a[i] < 0) {
				s = "toothpaste";
				break;
			}
		}
	}
	cout << s << '\n';
	return 0;
}