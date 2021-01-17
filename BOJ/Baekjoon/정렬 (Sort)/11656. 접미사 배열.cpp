#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	int l = s.length();
	vector<string> v;
	for (int i = 0; i < l; i++)
		v.push_back(s.substr(i));
	sort(v.begin(), v.end());
	for (int i = 0; i < l; i++)
		cout << v[i] << '\n';
	return 0;
}