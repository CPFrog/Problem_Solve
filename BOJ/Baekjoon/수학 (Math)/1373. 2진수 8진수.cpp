#include <iostream>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string b;
	cin >> b;
	if (b == "0")
		cout << 0 << '\n';
	else {
		int l = b.length();
		stack<int> s;
		int temp;
		for (int i = l - 1; i >= 0; i -= 3) {
			temp = 0;
			if (i >= 3) {
				for (int j = 0; j < 3; j++)
					temp += (b[i - j] - '0') * pow(2, j);
			}
			else {
				for (int j = 0; j <= i; j++)
					temp += b([i - j] - '0') * pow(2, j);
			}
			s.push(temp);
		}
		while (!s.empty()) {
			cout << s.top();
			s.pop();
		}
		cout << '\n';
	}
	return 0;
}