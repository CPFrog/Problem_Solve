#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	string s;
	cin >> s;
	int ok = 1;
	while (--n) {
		string s1;
		cin >> s1;
		if (s1[0] != s[0]) ok = 0;
	}
	cout << ok << '\n';
	return 0;
}