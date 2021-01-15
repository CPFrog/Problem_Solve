#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int r, c;
	cin >> r >> c;
	int min = 64;
	vector<string> v(r);
	char a[] = { 'W','B' };
	for (int i = 0; i < r; i++)
		cin >> v[i];

	for (int i = 0; i <= r - 8; i++) {
		for (int j = 0; j <= c - 8; j++) {
			int l = (i + j) % 2;
			for (char c : a) {
				int cnt = 0;
				for (int x = i; x < i + 8; x++) {
					for (int y = j; j < j + 8; y++) {
						if ((x + y) % 2 == l && v[x][y] != c)
							cnt++;
						else if ((x + y) % 2 != l && v[x][y] == c)
							cnt++;
					}
				}
				if (cnt < min)
					min = cnt;
			}
		}
	}
	cout << min << '\n';
	return 0;
}