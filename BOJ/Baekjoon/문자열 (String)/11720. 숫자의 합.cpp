#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, sum=0;
	string s;
	cin >> n >> s;

	for (int i=0;i<n;i++)
		sum += s.at(i) - 48;

	cout << ans << '\n';
	return 0;
}