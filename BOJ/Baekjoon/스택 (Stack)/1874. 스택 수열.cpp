#include <iostream>
#include <stack>
#include <string>
using namespace std;

string s;
bool used[1000001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	stack<int> s;
	int cur = 0;
	bool a = 1;
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		if (a) {
			if (d > cur) {
				for (int j = cur + 1; j <= d; j++) {
					if (!used[j]) {
						s.push(j);
						used[j] = 1;
						ans.append("+\n");
					}
				}
				s.pop();
				ans.append("-\n");
				cur = d;
			}
			else {
				if (s.top() != d) a = 0;
				else {
					cur = d;
					ans.append("-\n");
					s.pop();
				}
			}
		}
	}
	if (a) cout << ans << '\n';
	else cout << "NO" << '\n';
	return 0;
}