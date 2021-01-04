#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int item;
	int hmax = 0, amax = 0;
	while (n--) {
		cin >> item;
		if (item > hmax) hmax = item;
	}
	while (m--) {
		cin >> item;
		if (item > amax) amex = item;
	}
	cout << amax + hmax << '\n';
	return 0;
}