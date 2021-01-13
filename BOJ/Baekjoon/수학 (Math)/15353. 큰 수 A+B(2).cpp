#include <iostream>
#include <string>
#include <stack>
using namespace std;

int pick(string& s) {
	if (s.empty()) return 0;
	int p = (int)s.back() - '0';
	s.pop_back();
	return p;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	string a, b;
	cin >> a >> b;

	stack<int> s;

	int ml = max(a.length(), b.length());
	int temp = 0;
	for (int i = 0; i < ml; i++) {
		temp += pick(a) + pick(b);
		if (temp > 9) {
			s.push(temp - 10);
			temp = 1;
		}
		else {
			s.push(temp);
			temp = 0;
		}
		if (i == ml - 1 && temp)
			s.push(temp);
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	cout << '\n';
	return 0;
}