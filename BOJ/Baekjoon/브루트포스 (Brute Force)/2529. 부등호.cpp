#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int k;
	cin >> k;
	char c[k];
	int big[k + 1];
	int small[k + 1];
	for (int i = 0; i < k; i++) {
		cin >> c[i];
		small[i] = i;
		big[i] = 9 - i;
	}
	small[k] = k;
	big[k] = 9 - k;

	while (prev_permutation(big, big + k + 1)) {
		int i;
		for (i = 0; i < k; i++) {
			if (c[i] == '<' && big[i] > big[i + 1])
				break;
			else if (c[i] == '>' && big[i] < big[i + 1])
				break;
		}
		if (i >= k) break;
	}
	for (int i = 0; i <= k; i++) cout << big[i];
	cout << '\n';
	for (int i = 0; i <= k; i++) cout << small[i];
	cout << '\n';
	return 0;
}