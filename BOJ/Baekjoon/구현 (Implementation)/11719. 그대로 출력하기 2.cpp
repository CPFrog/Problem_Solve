#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while (1) {
		string s;
		getline(cin, s);
		if (cin.eof()) return 0;
		else cout << s << '\n';
	}
}