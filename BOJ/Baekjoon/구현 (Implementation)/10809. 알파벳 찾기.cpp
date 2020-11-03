// submitted at 2018.08.09. 18:43:47
#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a[26];
	for (int i = 0; i < 26; i++) a[i] = 1000;

	string w;
	cin >> w;

	for (int i = 0; i < w.length(); i++)
		if (i < a[w.at(i) - 97]) a[w.at(i) - 97] = i;
	for (int i = 0; i < 26; i++) {
		if (a[i] == 1000) a[i] = -1;
		cout << a[i] << " ";
	}
	return 0;
}