#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	cin >> s;

	int i = 0;
	for (char c : s) {
		i++;
		cout << c;
		if (i == 10) {
			cout << '\n';
			i = 0;
		}
	}
	return 0;
}