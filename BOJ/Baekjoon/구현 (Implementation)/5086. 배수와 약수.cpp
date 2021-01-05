#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int a, b;
	string s;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) return 0;
		if (a > b) {
			if (a % b == 0) s = "multiple";
			else s = "neither";
		}
		else {
			if (b % a == 0) s = "factor";
			else s = "neither";
		}
		cout << s << '\n';
	}
}