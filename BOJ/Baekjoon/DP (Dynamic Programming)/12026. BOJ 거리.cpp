#include <iostream>
#include <vector>
using namespace std;

char rew(char c) {
	if (c == 'B') return 'J';
	else if (c == 'O') return 'B';
	else return 'O';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> d(n, -1);
	d[0] = 0;
	for (int i = 1; i < n; i++) {
		char now = s[i];
		char prev = rew(now);
		for (int j = 0; j < i; j++) {
			if (s[j] != prev) continue;
			else if (d[j] == -1) continue;
			int cost = d[j] + (i - j) * (i - j);
			if (d[i] == -1 || d[i] > cost) d[i] = cost;
		}
	}
	cout << d[n - 1] << '\n';
	return 0;
}