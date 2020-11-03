#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	stack<int> s;
	string p;
	cin >> p;
	int pcs = 0;
	for (int i = 0; i < p.length(); i++) {
		if (p.at(i) == '(') s.push(i);
		else {
			if (s.top() + 1 == i) {
				s.pop();
				pcs += s.size();
			}
			else {
				s.pop();
				pcs += 1;
			}
		}
	}
	cout << pcs << '\n';
	return 0;
}