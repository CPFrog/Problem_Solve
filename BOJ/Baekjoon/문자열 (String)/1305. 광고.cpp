#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> preprocess(string p) {
	int pl = p.length();
	vector<int> pi(pl);
	pi[0] = 0;
	int j = 0;
	for (int i = 1; i < pl; i++) {
		while (j > 0 && p[i] != p[j])
			j = pi[j - 1];
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

	int n;
	string s;
	cin >> n >> s;

	vector<int> pi = preprocess(s);
	cout << n - pi[n - 1] << '\n';
	return 0;
}