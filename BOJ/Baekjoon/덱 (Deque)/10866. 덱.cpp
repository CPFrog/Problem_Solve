#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> dq;
void op(string s);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	int cn;
	cin >> cn;
	while (cn--) {
		cin >> s;
		op(s);
	}
	return 0;
}

void op(string s) {
	int input;
	if (s == "push_front") {
		cin >> input;
		dq.push_front(input);
	}
	else if (s == "push_back") {
		cin >> input;
		dq.push_back(input);
	}
	else if (s == "pop_front") {
		if (dq.empty()) cout << "-1" << '\n';
		else {
			cout << dq.front() << '\n';
			dq.pop_front();
		}
	}
	else if (s == "pop_back") {
		if (dq.empty()) cout << "-1" << '\n';
		else {
			cout << dq.back() << '\n';
			dq.pop_back();
		}
	}
	else if (s == "size") cout << dq.size() << '\n';
	else if (s == "empty") cout << ((dq.empty()) ? "1" : "0") << '\n';
	else if (s == "front") {
		if (dq.empty()) cout << "-1" << '\n';
		else cout << dq.front() << '\n';
	}
	else if (s == "back") {
		if (dq.empty()) cout << "-1" << '\n';
		else cout << dq.back() << '\n';
	}
}