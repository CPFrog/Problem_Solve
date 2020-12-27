#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	srand((unsigned int)time(0));

	int ans = (rand() << 15 | rand());
	if (ans < 0) ans *= -1;
	cout << ans << '\n';
	return 0;
}