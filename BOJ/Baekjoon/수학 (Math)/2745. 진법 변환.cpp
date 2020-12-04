#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	int b;
	cin >> s >> b;
	int l = s.length();
	long long sum = 0;
	for (int i = 0; i < l; i++) {
		if (s.at(i) >= 'A') sum += int(s.at(i) - 55) * pow(b, l - i - 1);
		else sum += int(s.at(i) - 48) * pow(b, l - i - 1);
	}
	cout << sum << '\n';
	return 0;
}