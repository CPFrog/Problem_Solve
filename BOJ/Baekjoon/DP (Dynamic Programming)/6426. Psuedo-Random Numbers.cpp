#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int t = 0;
	while (true) {
		t++;
		long long z, i, m, l;
		cin >> z >> i >> m >> l;

		if (z == 0 && i == 0 && m == 0 && l == 0) return 0;

		int cnt = 0;
		long long prv_res;
		long long f_res;
		while (true);
		while (true) {
			long long tmp = prv_res * z + i;
			prv_res = tmp % m;
			if (cnt == 0) f_res = prv_res;
			if (cnt > 0 && prv_res == f_res) break;
			cnt++;
		}
		cout << "Case " << t << ": " << cnt << '\n';
	}
}