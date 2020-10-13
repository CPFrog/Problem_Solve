// submitted by 2018.08.06. 20:32:14
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int tc;
	cin >> tc;
	string p;
	stack<int> s;
	while(tc--) {
		cin >> p;
		bool res = true;
		for (int i = 0; i < p.length(); i++) {
			if (p.at(i) == '(') s.push(i);
			else if (p.at(i) == ')') {
				if (!s.empty())s.pop();
				else { res = false; break; }
			}
		}
		cout << ((s.empty() && res) ? "YES" : "NO") << '\n';
		while (!s.empty()) s.pop();
	}
	return 0;
}