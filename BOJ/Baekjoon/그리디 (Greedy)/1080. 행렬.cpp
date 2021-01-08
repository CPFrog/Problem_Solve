#include <iostream>
#include <vector>
using namespace std;

int a[2][50][50];

void flip(int rp, int cp) {
	for (int i = rp, i <= rp + 2; i++) {
		for (int j = cp; j <= cp + 2; j++) {
			if (a[0][i][j]) a[0][i][j] = 0;
			else a[0][i][j] = 1;
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int r, c;
	cin >> r >> c;
	string s;
	for (int k = 0; k < 2; k++) {
		for (int i = 0; i < r; i++) {
			cin >> s;
			for (int j = 0; j < c; j++)
				a[k][i][j] = int(s[j] - '0');
		}
	}
	int count = 0;
	for (int ri = 0; ri < r - 2; ri++) {
		for (int ci = 0; ci < c - 2; ci++) {
			if (a[0][ri][ci] != a[1][ri][ci]) {
				flip(ri, ci);
				count++;
			}
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (a[0][i][j] != a[1][i][j]) count = -1;
		}
	}
	cout << count << '\n';
	return 0;
}