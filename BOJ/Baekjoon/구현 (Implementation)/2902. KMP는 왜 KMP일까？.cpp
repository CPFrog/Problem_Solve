#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int l = s.length();
	vector<char> v;
	v.push_back(s[0]);
	for (int i = 1; i < l; i++) {
		if (s[i] <= 'Z' && s[i] >= 'A' && s[i - 1] == '-')
			v.push_back(s[i]);
	}
	for (char c : v)
		cout << c;
	cout << '\n';
	return 0;
}