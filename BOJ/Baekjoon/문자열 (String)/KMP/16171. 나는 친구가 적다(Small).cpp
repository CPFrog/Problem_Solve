#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> preprocess(string s) {
	int l = s.length();
	vector<int> pi(l);
	pi[0] = 0;
	int j = 0;
	for (int i = 0; i < l; i++) {
		while (j > 0 && s[j] != s[i])
			j = pi[j - 1];
		if (s[i] == s[j]) {
			pi[i] = j + 1;
			j += 1;
		}
		else pi[i] = 0;
	}
	return pi;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	string o, s, op;
	cin >> o >> s;

	for (char c : o) {
		if (c >= '0' && c <= '9') continue;
		op.push_back(c);
	}
	int l = op.length();
	int sl = s.length();
	vector<int> pi = preprocess(s);
	int j = 0;
	for (int i = 0; i < l; i++) {
		while (j > 0 && op[i] != op[j])
			j = pi[j - 1];
		if (op[i] == s[j]) {
			j++;
			if (j == sl) break;
		}
		else if (j == 0) continue;
	}
	cout << (j == sl ? 1 : 0) << '\n';
	return 0;
}