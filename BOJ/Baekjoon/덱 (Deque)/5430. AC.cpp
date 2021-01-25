#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		string cmd;
		int n;
		string arr;
		cin >> cmd >> n >> arr;
		deque<int> dq;
		int d = 0;
		if (n > 0) {
			for (char c : arr) {
				if (c >= '0' && c <= '9') {
					d *= 10;
					d += c - '0';
				}
				else if (c == ',' || c == ']') {
					dq.push_back(d);
					d = 0;
				}
			}
		}
		int front = 1;
		bool ok = 1;
		for (char c : cmd) {
			if (c == 'R')
				front *= -1;
			else {
				if (dq.empty()) {
					cout << "error" << '\n';
					ok = 0;
					break;
				}
				if (front == 1)
					dq.pop_front();
				else dq.pop_back();
			}
		}
		if (ok) {
			cout << '[';
			while (!dq.empty()) {
				if (front == 1) {
					cout << dq.front();
					dq.pop_front();
				}
				else {
					cout << dq.back();
					dq.pop_back();
				}
				if (!dq.empty())
					cout << ',';
			}
			cout << ']' << '\n';
		}
	}
	return 0;
}