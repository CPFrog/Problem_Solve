#include <iostream>
#include <stack>
#include <vector>
using namespace std;

double calc(double a, double b, char c) {
	if (c == '+') return a + b;
	if (c == '-') return a - b;
	if (c == '*') return a * b;
	return a / b;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	string s;
	cin >> n >> s;
	stack<double> x;
	vector<int> v(26);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	for (char c : s) {
		if (c >= 'A' && c <= 'Z')
			x.push(v[c - 'A']);

		else {
			double b = x.top;
			x.pop();
			double a = x.top();
			x.pop();
			x.push(calc(a, b, c));
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << x.top() << '\n';
	x.pop();
	return 0;
}