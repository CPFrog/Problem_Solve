#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<string> v[55];
	while (n--) {
		string s;
		cin >> s;
		v[s.length()].push_back(s);
	}

	for (int i = 0; i < 55; i++) {
		if (!v[i].empty()) {
			sort(v[i].begin(), v[i].end());
			v[i].erase(unique(v[i].begin(), v[i].end()), v[i].end());
			for (string s : v[i])
				cout << s << '\n';
		}
	}
	return 0;
}