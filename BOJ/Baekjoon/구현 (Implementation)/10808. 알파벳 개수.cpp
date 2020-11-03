// submitted at 2018.08.09. 18:30:35
#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a[26] = { 0, };
	string w;
	cin >> w;
	for (int i = 0; i < w.length(); i++)
		a[w.at(i) - 97]++;
	for (int i = 0; i < 26; i++)
		cout << a[i] << " ";
	return 0;
}