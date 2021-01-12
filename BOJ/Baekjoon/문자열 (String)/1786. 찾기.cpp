#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> preprocessing(string p) {
	int n = p.length();
	vector<int> pi(n);
	pi[0] = 0;
	int j = 0;
	for (int i = 1; i < n; i++) {
		while (j > 0 && p[i] != p[j])
			j = pi[i - 1];
		if (p[i] == p[j]) {
			pi[i] = j + 1;
			j++;
		}
		else pi[i] = 0;
	}
	return pi;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	string s, p;
	getline(cin, s);
	getline(cin, p);
	vector<int> p1 = preprocessin(p);

	int sl = s.length();
	int pl = p.length();
	int j = 0;
	for (int i = 0; i < sl; i++) {
		while (j > 0 && s[i] != p[j])
			j = pi[j - 1];
		if (s[i] == p[j]) {
			if (j == pl - 1) {
				ans.push_back(i + 1 - pl);
				j = pi[j];
			}
			else j++;
		}
	}
	cout << ans.size() << '\n';
	for (int a : ans)
		cout << a + 1 << ' ';
	cout << '\n';
	return 0;
}