// submitted at 2018.07.30. 17:52:05
#include <iostream>
#include <vector>
#define min(a,b)(((a)<(b))?(a):(b))
using namespace std;

void to1(int a);

int dp[1000000] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a;
	cin >> a;
	dp[1] = 1; dp[2] = 1;
	if (a > 2)
		for (int i = 3; i <= a; i++)
			to1(i);
	cout << dp[a - 1] << '\n';

	return 0;
}

void to1(int a) {
	if (a % 3 == 0 && a % 2 == 0)
		dp[a - 1] = min(min(dp[a / 3 - 1], dp[a / 2 - 1]), dp[a - 2]) + 1;
	else if (a % 3 == 0)
		dp[a - 1] = min(dp[a / 3 - 1], dp[a - 2]) + 1;
	else if (a % 2 == 0)
		dp[a - 1] = min(dp[a / 2 - 1], dp[a - 2]) + 1;
	else dp[a - 1] = dp[a - 2] + 1;
}