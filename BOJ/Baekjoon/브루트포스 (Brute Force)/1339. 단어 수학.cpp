#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

bool desc(int i, int j) {
	return i > j;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int a[26] = { 0, };
	while (n--) {
		string s;
		cin >> s;
		int l = s.length();
		for (int i = 0; i < l; i++)
			a[s.at(i) - 'A'] += pow(10, l - i - 1);
	}
	sort(a, a + 26, desc);
	int ans = 0;
	for (int i = 0; a[i] > 0; i++)
		ans += a[i] * (9 - i);
	cout << ans << '\n';
	return 0;
}