#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	while (true) {
		string s;
		cin >> s;
		if (s == "START") {
			while (true) {
				string enc_s;
				cin >> enc_s;
				if (enc_s == "END") {
					cout << '\n';
					break;
				}
				int l = enc_s.length();
				for (int i = 0; i < l; i++) {
					if (enc_s[i] >= 'A' && enc_s[i] <= 'Z') {
						enc_s[i] -= 5;
						if (enc_s[i] < 'A')
							enc_s[i] += 26;
					}
				}
				cout << enc_s << ' ';
			}
		}
		else if (s == "ENDOFINPUT") return 0;
	}
}