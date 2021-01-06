#include <iostream>
using namespace std; 

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t[45];
	t[0] = 0;
	for (int i = 1; i < 45; i++)
		t[i] = t[i - 1] + i;
	int tc;
	tin >> tc;
	while (tc--) {
		int k;
		cin >> k;
		int ok = 0;
		for (int a = 1; a < 45; a++) {
			for (int b = 1; b < 45; b++) {
				for (int c = 1; c < 45; c++) {
					if (t[a] + t[b] + t[c] == k) {
						ok = 1;
						goto PRINT;
					}
				}
			}
		}
	PRINT:
		cout << ok << '\n';
	}
	return 0;
}