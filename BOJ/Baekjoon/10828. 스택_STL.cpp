// submitted at 2018.08.06. 19:38:16
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	stack<int> s; int cmd_n, opt; string cmd;
	cin >> cmd_n;
	for (int i = 0; i < cmd_n; i++) {
		cin >> cmd;
		if (cmd == "push") { cin >> opt; s.push(opt); 
		} else if (cmd == "pop") {
			if (!s.empty()) { cout << s.top() << '\n'; s.pop(); }
			else cout << "-1" << '\n';
		} else if (cmd == "size") {
			cout << s.size() << '\n';
		} else if (cmd == "empty") {
			cout << ((s.empty()) ? "1" : "0") << '\n';
		} else if (cmd == "top") {
			if (!s.empty())cout << s.top() << '\n';
			else cout << "-1" << '\n';
		}
	}
	return 0;
}