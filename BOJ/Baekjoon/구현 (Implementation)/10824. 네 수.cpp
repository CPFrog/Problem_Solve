#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b, c, d;
	long long ans;
	string s1, s2;
	cin >> a >> b >> c >> d;

	s1 = to_string(a) + to_string(b);
	s2 = to_string(c) + to_string(d);
	ans = stoll(s1) + stoll(s2);

	cout << ans << '\n';
	return 0;
}