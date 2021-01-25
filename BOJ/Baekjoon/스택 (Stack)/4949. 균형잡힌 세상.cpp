#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	while (1) {
		string s;
		getline(cin, s);
		if (s == ".") return 0;
		stack<char> bs;
		string ans = "yes";
		for (char c : s) {
			if (c == '(' || c == '[') bs.push(c);
			else if (c == ')') {
				if (bs.empty() || bs.top() != '(') {
					ans = "no";
					break;
				}
				else bs.pop();
			}
			else if (c == ']') {
				if (bs.empty() || bs.top != '[') {
					ans = "no";
					break;
				}
				else bs.pop();
			}
		}
		if (!bs.empty()) ans = "no";
		cout << ans << '\n';
	}
	return 0;
}