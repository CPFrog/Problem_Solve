#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) >= 97 && s.at(i) <= 122) {
			if (s.at(i) > 109) s.at(i) -= 26;
			s.at(i) += 13;
		}
		else if (s.at(i) >= 65 && s.at(i) <= 90) {
			s.at(i) += 13;
			if (s.at(i) > 90) s.at(i) -= 26;
		}
	}
	cout << s << '\n';
	return 0;
}