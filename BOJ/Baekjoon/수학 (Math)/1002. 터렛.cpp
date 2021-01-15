#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while (t--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int rmax = r1 > r2 ? r1 : r2;
		int rmin = r1 > r2 ? r2 : r1;
		double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		int ans;
		if (x1 == x2 && y1 == y2) { //동심원
			if (r1 == r2) ans = -1;
			else ans = 0;
		}
		else if (d == (r1 + r2)) ans = 1; //외접
		else if (rmax == (d + rmin)) ans = 1; //내접
		else if (d > r1 + r2) ans = 0; //외부에서 안만남
		else if (rmax > (d + rmin)) ans = 0; //내부에서 안만남
		else if (d < r1 + r2) ans = 2; //두 점에서 접함
		cout << ans << '\n';
	}
	return 0;
}