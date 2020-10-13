// submitted at 2018.08.05. 22:49:22
#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack <char> l;
stack <char> r;

void op(char c);
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int cn, i;
	string s;
	cin >> s;
	for (i = 0; i < s.length(); i++) l.push(s.at(i));
	char cmd;
	cin >> cn;
	for (int i = 0; i < cn; i++) {
		cin >> cmd;
		op(cmd);
	}
	while (!l.empty()) {
		r.push(l.top());
		l.pop();
	}
	while (!r.empty()) {
		cout << r.top();
		r.pop();
	}
}

void op(char c) {
	switch (c) {
	case 'L':
		if (!l.empty()) { r.push(l.top()); l.pop(); }
		break;
	case 'D':
		if (!r.empty()) { l.push(r.top()); r.pop(); }
		break;
	case 'B':
		if (!l.empty()) l.pop();
		break;
	case 'P':
		char input;
		cin >> input;
		l.push(input);
	}
}