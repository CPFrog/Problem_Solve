// submitted at 2018.08.07. 18:21:23
#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> q;
void op(string s);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int cn;
	cin >> cn;
	string cmd;
	while (cn--) {
		cin >> cmd;
		op(cmd);
	}
	return 0;
}

void op(string s) {
	if (s == "push") {
		int opt;
		cin >> opt;
		q.push(opt);
	}
	else if (s == "pop") {
		if (q.empty())
			cout << "-1" << '\n';
		else {
			cout << q.front() << '\n';
			q.pop();
		}
	}
	else if (s == "size")  cout << q.size() << '\n';
	else if (s == "empty") cout << ((q.empty()) ? "1" : "0") << '\n';
	else if (s == "front") {
		if (q.empty()) cout << "-1" << '\n';
		else cout << q.front() << '\n';
	}
	else if (s == "back") {
		if (q.empty()) cout << "-1" << '\n';
		else cout << q.back() << '\n';
	}
}