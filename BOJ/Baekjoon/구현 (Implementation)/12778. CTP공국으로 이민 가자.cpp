#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int t, m, d;
	char cmd, c;
	cin >> t;
	while (t--) {
		cin >> m >> cmd;
		while (m--) {
			if (cmd == 'C') {
				cin >> c;
				cout << (int)c - 64 << " ";
			}
			else {
				cin >> d;
				cout << (char)(d + 64) << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}