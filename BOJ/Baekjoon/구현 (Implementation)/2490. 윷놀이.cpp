#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			int d;
			cin >> d;
			if (!d) cnt++;
		}
		if (cnt == 0) cnt = 5;
		cout << (char)('A' + cnt - 1) << '\n';
	}
	return 0;
}