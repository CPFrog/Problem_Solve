#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true) {
		int n;
		cin >> n;
		if (n == 0) return 0;
		string s;
		cin >> s;
		int l = s.length();
		int r = l / n;
		char c[r][n];
		for (int i = 0; i < r; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j++)
					c[i][j] = s.at(i * n + j);
			}
			else for (int j = n - 1; j >= 0; j--)
				c[i][j] = s.at(i * n + (n - 1 - j));
		}
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < r; i++)
				cout << c[i][j];
		}
		cout << '\n';
	}
}