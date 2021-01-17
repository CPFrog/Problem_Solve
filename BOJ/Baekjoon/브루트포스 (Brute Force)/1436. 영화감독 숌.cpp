#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n;
	cin >> n;

	int i = 0;
	int j = 665;
	string s;
	while (++j) {
		s = to_string(j);
		if (s.find("666") != -1) {
			i++;
			if (i == n) break;
		}
	}
	cout << j << '\n';
	return 0;
}